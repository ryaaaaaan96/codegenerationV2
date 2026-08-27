#!/usr/bin/env node

/**
 * 根据《UPM项目测点数据表.xlsx》生成 C 配置表。
 *
 * 数据流：Excel 工作表 -> JavaScript 对象 -> Eta 模板 -> output 中的 C/H 文件。
 * 安全约束：Excel 始终以只读模式打开；只写输出目录；生成前后校验源文件。
 */

'use strict';

// Node.js 内置模块不需要安装；xlsx 和 eta 需要通过 pnpm install 安装。
const fs = require('node:fs/promises');
const path = require('node:path');
const crypto = require('node:crypto');
// SheetJS 负责从内存 Buffer 解析 Excel，并读取文件中缓存的公式结果。
const XLSX = require('xlsx');
// Eta 是模板引擎，作用类似 Python 的 Mako：把数据填入 .eta 模板。
const { Eta } = require('eta');

// __dirname 是当前脚本所在目录，从其他目录执行时也能正确找到默认文件。
const ROOT_DIR = __dirname;
const DEFAULT_EXCEL = path.join(ROOT_DIR, 'UPM项目测点数据表.xlsx');
const DEFAULT_OUTPUT = path.join(ROOT_DIR, 'output');
const TEMPLATE_DIR = path.join(ROOT_DIR, 'templates');

function sha256(buffer) {
  return crypto.createHash('sha256').update(buffer).digest('hex');
}

async function readSourceReadOnly(filePath) {
  // 'r' 只授予读取权限；文件不存在时也不会创建文件。
  const handle = await fs.open(filePath, 'r');
  try {
    const stat = await handle.stat();
    if (!stat.isFile()) throw new Error(`Excel 路径不是普通文件：${filePath}`);
    const buffer = await handle.readFile();
    return { buffer, snapshot: { size: stat.size, mtimeMs: stat.mtimeMs, sha256: sha256(buffer) } };
  } finally {
    await handle.close();
  }
}

async function assertSourceUnchanged(filePath, before) {
  const { snapshot: after } = await readSourceReadOnly(filePath);
  if (before.size !== after.size || before.mtimeMs !== after.mtimeMs || before.sha256 !== after.sha256) {
    throw new Error(`生成期间 Excel 源文件发生变化，已停止输出：${filePath}`);
  }
}

function normalizeHeader(value) {
  // 表头可能含换行，如“数据\r\n长度”。忽略空白后，调整列顺序不会影响读取。
  return String(value ?? '').replace(/\s+/g, '').toLowerCase();
}

function cellText(value) {
  return value === null || value === undefined ? '' : String(value).trim();
}

function makeSheetReader(workbook, sheetName) {
  const worksheet = workbook.Sheets[sheetName];
  if (!worksheet) throw new Error(`缺少工作表“${sheetName}”`);
  const matrix = XLSX.utils.sheet_to_json(worksheet, { header: 1, raw: true, defval: null, blankrows: false });
  const indexByHeader = new Map();
  (matrix[0] ?? []).forEach((header, index) => indexByHeader.set(normalizeHeader(header), index));

  // names 允许同一个字段有多个可接受名称，例如 signID 和 sigID。
  function findColumn(names) {
    for (const name of names) {
      const index = indexByHeader.get(normalizeHeader(name));
      if (index !== undefined) return index;
    }
    throw new Error(`工作表“${sheetName}”缺少列：${names.join(' / ')}`);
  }

  // 把二维表格转换为对象数组；excelRow 用于定位原始 Excel 行。
  function rows(columnNames) {
    const indexes = Object.fromEntries(Object.entries(columnNames).map(([key, names]) => [key, findColumn(names)]));
    return matrix.slice(1).map((values, offset) => {
      const result = { excelRow: offset + 2 };
      for (const [key, index] of Object.entries(indexes)) result[key] = values[index];
      return result;
    });
  }
  return { rows };
}

function cleanComment(value) {
  return cellText(value).replace(/\*\//g, '* /').replace(/[\r\n]+/g, ' ');
}

function xmlAttribute(value) {
  return cellText(value)
    .replace(/&/g, '&amp;')
    .replace(/"/g, '&quot;')
    .replace(/'/g, '&apos;')
    .replace(/</g, '&lt;')
    .replace(/>/g, '&gt;')
    .replace(/\r\n|\r|\n/g, '&#10;');
}

function toUpperSnake(value, sheetName, row, fieldName = 'ENMU') {
  const source = cellText(value);
  const result = source
    .replace(/([A-Z]+)([A-Z][a-z])/g, '$1_$2')
    .replace(/([a-z0-9])([A-Z])/g, '$1_$2')
    .replace(/[^A-Za-z0-9]+/g, '_')
    .replace(/^_+|_+$/g, '')
    .replace(/_+/g, '_')
    .toUpperCase();
  if (!/^[A-Z_][A-Z0-9_]*$/.test(result)) {
    throw new Error(`${sheetName}!${row} 的“${fieldName}”无法转换为 C 枚举名：${source || '<空>'}`);
  }
  return result;
}

// Excel 中会使用这些内容表示“该字段没有配置”。
// 新版表格增加了“※”占位符，因此这里统一判断，避免每个字段各写一套规则。
function isUnconfiguredValue(value) {
  const text = cellText(value);
  return text === '' || text === '/' || text === '※';
}

function isInvalidSignalId(value) {
  const text = cellText(value);
  return isUnconfiguredValue(value) || text === '0';
}

function requiredInteger(value, sheetName, row, fieldName, { min = 0 } = {}) {
  const number = Number(value);
  if (!Number.isInteger(number) || number < min) {
    throw new Error(`${sheetName}!${row} 的“${fieldName}”必须是大于等于 ${min} 的整数，当前值：${cellText(value) || '<空>'}`);
  }
  return number;
}

function optionalInteger(value, fallback, sheetName, row, fieldName) {
  // 可选整数遇到空值、/、※ 时使用默认值；其他内容仍严格校验。
  return isUnconfiguredValue(value) ? fallback : requiredInteger(value, sheetName, row, fieldName);
}

function cToken(value, fallback, sheetName, row, fieldName) {
  // 该值会进入 C 代码，所以拒绝可能破坏 C 语法或注释结构的字符。
  const text = cellText(value);
  if (isUnconfiguredValue(value)) return fallback;
  if (/[\r\n;{}]|\/\*|\*\//.test(text)) {
    throw new Error(`${sheetName}!${row} 的“${fieldName}”包含不安全的 C 代码字符：${text}`);
  }
  return text;
}

function mapDataType(value, sheetName, row) {
  const source = cellText(value).toUpperCase();
  // 现有 C 模板没有 F32 枚举；浮点数按其 32 位传输宽度使用 U32。
  const result = { F32: 'U32', U32: 'U32', S32: 'S32', U16: 'U16', S16: 'S16', U8: 'U8', STRING: 'STRING' }[source];
  if (!result) throw new Error(`${sheetName}!${row} 的数据类型不受支持：${source || '<空>'}`);
  return result;
}

function mapRwMode(value, sheetName, row) {
  const source = cellText(value).toUpperCase();
  const result = { RO: 'UPP_MODE_R', RW: 'UPP_MODE_RW', WO: 'UPP_MODE_W' }[source];
  if (!result) throw new Error(`${sheetName}!${row} 的读写权限不受支持：${source || '<空>'}`);
  return result;
}

function mapXmlDataType(value, sheetName, row) {
  // UPP slave XML 的 OutDataType 使用协议规定的数字类型编码。
  const source = cellText(value).toUpperCase();
  const result = { U8: 2, S16: 3, U16: 4, S32: 5, U32: 6, F32: 6, STRING: 12 }[source];
  if (result === undefined) throw new Error(`${sheetName}!${row} 的 XML 数据类型不受支持：${source || '<空>'}`);
  return result;
}

function mapXmlRwMode(value, sheetName, row) {
  const source = cellText(value).toUpperCase();
  const result = { RO: 'R', RW: 'RW', WO: 'W' }[source];
  if (!result) throw new Error(`${sheetName}!${row} 的 XML 读写权限不受支持：${source || '<空>'}`);
  return result;
}

function parseXmlProtocol(workbook) {
  const sheetName = 'UPM-DSP采集数据';
  const rows = makeSheetReader(workbook, sheetName).rows({
    description: ['数据定义'], dataType: ['数据类型'], dataLength: ['数据长度'],
    uppAddress: ['UPP地址'], uppOffset: ['UPP偏移'], rwMode: ['读写权限'],
  });
  const groups = new Map();
  for (const row of rows) {
    if (!cellText(row.description)) continue;
    const modelNo = requiredInteger(row.uppAddress, sheetName, row.excelRow, 'UPP地址', { min: 1 });
    const point = {
      // slave XML 面向人工查看，DataName 使用 Excel 的中文“数据定义”。
      dataName: xmlAttribute(row.description),
      regLen: requiredInteger(row.dataLength, sheetName, row.excelRow, '数据长度', { min: 1 }),
      offsetAddr: requiredInteger(row.uppOffset, sheetName, row.excelRow, 'UPP偏移'),
      outDataType: mapXmlDataType(row.dataType, sheetName, row.excelRow),
      rwMode: mapXmlRwMode(row.rwMode, sheetName, row.excelRow),
      yxMerge: 0,
      chgUpload: 0,
    };
    if (!groups.has(modelNo)) groups.set(modelNo, []);
    const points = groups.get(modelNo);
    if (points.some((item) => item.offsetAddr === point.offsetAddr)) {
      throw new Error(`${sheetName}!${row.excelRow} 的 UPP 模型 ${modelNo} 中 OffsetAddr ${point.offsetAddr} 重复`);
    }
    points.push(point);
  }
  return {
    devCode: 2,
    models: [...groups.entries()].map(([no, points]) => ({ name: no, no, type: 'YC', points })),
  };
}

function parseCollect(workbook) {
  // collect 全部来自“UPM-DSP采集数据”，并按照 UPP地址分组。
  const sheetName = 'UPM-DSP采集数据';
  const rows = makeSheetReader(workbook, sheetName).rows({
    description: ['数据定义'], enumName: ['ENMU'], dataType: ['数据类型'], dataLength: ['数据长度'], precision: ['精度'],
    uppAddress: ['UPP地址'], uppOffset: ['UPP偏移'], rwMode: ['读写权限'], requestCycle: ['UPP轮询间隔'],
    setPriority: ['设置优先级'], scanPriority: ['轮询优先级'], sigId: ['signID', 'sigID'],
  });
  const autoSigIdStart = 30000;
  const generatedRows = rows.filter((row) => cellText(row.description));
  const autoSigIdCount = generatedRows.filter((row) => isInvalidSignalId(row.sigId)).length;
  const autoSigIdEnd = autoSigIdStart + autoSigIdCount - 1;
  for (const row of generatedRows) {
    const sigIdText = cellText(row.sigId);
    if (/^\d+$/.test(sigIdText)) {
      const sigId = Number(sigIdText);
      if (sigId >= autoSigIdStart && sigId <= autoSigIdEnd) {
        throw new Error(`${sheetName}!${row.excelRow} 的有效 signID ${sigId} 与自动编号区间 ${autoSigIdStart}～${autoSigIdEnd} 冲突`);
      }
    }
  }
  let nextAutoSigId = autoSigIdStart;
  const groups = new Map();
  for (const row of rows) {
    if (!cellText(row.description)) continue;
    const modelId = requiredInteger(row.uppAddress, sheetName, row.excelRow, 'UPP地址', { min: 1 });
    const dataLength = requiredInteger(row.dataLength, sheetName, row.excelRow, '数据长度', { min: 1 });
    const item = {
      excelRow: row.excelRow, description: cleanComment(row.description),
      offset: requiredInteger(row.uppOffset, sheetName, row.excelRow, 'UPP偏移'), dataLength,
      dataType: `UPP_DATA_TYPE_${mapDataType(row.dataType, sheetName, row.excelRow)}`,
      // 无有效 signID 的测点按 Excel 行顺序从 30000 开始连续编号。
      sigId: isInvalidSignalId(row.sigId) ? String(nextAutoSigId++) : toUpperSnake(row.enumName, sheetName, row.excelRow),
      rwMode: mapRwMode(row.rwMode, sheetName, row.excelRow),
      setPriority: optionalInteger(row.setPriority, 0, sheetName, row.excelRow, '设置优先级'),
      scanPriority: optionalInteger(row.scanPriority, 0, sheetName, row.excelRow, '轮询优先级'),
      requestCycle: optionalInteger(row.requestCycle, 0, sheetName, row.excelRow, 'UPP轮询间隔'),
      precision: optionalInteger(row.precision, 1, sheetName, row.excelRow, '精度'),
    };
    if (!groups.has(modelId)) groups.set(modelId, { modelId, rows: [] });
    groups.get(modelId).rows.push(item);
  }
  const groupList = [...groups.values()];
  return {
    groups: groupList,
    rowCount: groupList.reduce((count, group) => count + group.rows.length, 0),
    autoSigIdCount,
    autoSigIdStart,
    autoSigIdEnd,
  };
}

function parseProcessRows(workbook, config) {
  const rows = makeSheetReader(workbook, config.sheetName).rows(config.columns);
  const result = [];
  for (const row of rows) {
    // process 只生成具有有效 signID 的行；空值、0、/、※ 都跳过。
    if (!cellText(row.description) || isInvalidSignalId(row.sigId)) continue;
    result.push({
      excelRow: row.excelRow, description: cleanComment(row.description), enumName: cleanComment(row.enumName),
      sigId: toUpperSnake(row.enumName, config.sheetName, row.excelRow),
      sigSize: requiredInteger(row.dataLength, config.sheetName, row.excelRow, '数据长度', { min: 1 }),
      sigFlag: cToken(row.sigFlag, '0', config.sheetName, row.excelRow, 'arm配置参数'),
      dataType: `DATA_TYPE_${mapDataType(row.dataType, config.sheetName, row.excelRow)}`,
      callback: cToken(row.callback, 'MPP_NULL_PTR', config.sheetName, row.excelRow, '回调函数'),
    });
  }
  return result;
}

function parseProcess(workbook) {
  const commonDsp = {
    description: ['数据定义'], enumName: ['ENMU'], dataType: ['数据类型'], dataLength: ['数据长度'],
    sigFlag: ['arm配置参数'], callback: ['回调函数'], sigId: ['signID', 'sigID'],
  };
  const commonArm = { ...commonDsp };
  return {
    // DSP 与 LOCAL 是不同设备，因此分别生成两张处理表。
    dspRows: parseProcessRows(workbook, { sheetName: 'UPM-DSP采集数据', columns: commonDsp }),
    armRows: parseProcessRows(workbook, { sheetName: 'UPM单板测点', columns: commonArm }),
  };
}

function mapDeviceId(value, sheetName, row) {
  // “北向二级分类”决定 transmit 表中的设备编号。
  const category = cellText(value);
  if (category === '系统') return 'CFG_DEV_LOCAL';
  const match = /^模块([1-8])$/.exec(category);
  if (match) return `CFG_DEV_DSP${match[1]}`;
  throw new Error(`${sheetName}!${row} 的“北向二级分类”不受支持：${category || '<空>'}`);
}

function mapAccessMode(value, sheetName, row) {
  // Modbus 功能码直接根据读写权限决定，不再依赖 Excel 的“寄存器类型”列。
  const source = cellText(value).toUpperCase();
  if (source === 'RO') return '0x04';
  if (source === 'RW') return '0x03';
  throw new Error(`${sheetName}!${row} 的“读/写”必须是 RO 或 RW，当前值：${source || '<空>'}`);
}

function parseTransmit(workbook) {
  // transmit 直接读取“iconfig使用”的计算结果，无效 sigID 行不生成。
  const sheetName = 'iconfig使用';
  const rows = makeSheetReader(workbook, sheetName).rows({
    category: ['北向二级分类'], description: ['定义'], accessMode: ['读/写', '读写权限'],
    registerAddress: ['寄存器地址'], registerLength: ['寄存器长度'], sigId: ['sigID', 'signID'],
  });
  const result = [];
  for (const row of rows) {
    if (!cellText(row.description) || isInvalidSignalId(row.sigId)) continue;
    result.push({
      excelRow: row.excelRow, description: cleanComment(row.description),
      deviceId: mapDeviceId(row.category, sheetName, row.excelRow),
      sigId: toUpperSnake(row.sigId, sheetName, row.excelRow, 'sigID'),
      registerType: mapAccessMode(row.accessMode, sheetName, row.excelRow),
      registerAddress: requiredInteger(row.registerAddress, sheetName, row.excelRow, '寄存器地址'),
      registerLength: requiredInteger(row.registerLength, sheetName, row.excelRow, '寄存器长度', { min: 1 }),
    });
  }
  return result;
}

function parseEnumRows(workbook, sheetName) {
  const rows = makeSheetReader(workbook, sheetName).rows({
    description: ['数据定义'], enumName: ['ENMU'], sigId: ['signID', 'sigID'],
  });
  // 同名同值的枚举只输出一次；同名不同值会报错。
  const unique = new Map();
  for (const row of rows) {
    if (isInvalidSignalId(row.sigId)) continue;
    const name = toUpperSnake(row.enumName, sheetName, row.excelRow);
    const value = cToken(row.sigId, null, sheetName, row.excelRow, 'signID');
    const existing = unique.get(name);
    if (existing && existing.value !== value) {
      throw new Error(`枚举 ${name} 同时映射到 ${existing.value} 和 ${value}`);
    }
    if (!existing) unique.set(name, { name, value, description: cleanComment(row.description), excelRow: row.excelRow });
  }
  return [...unique.values()];
}

function parseEnums(workbook) {
  // LOCAL 与 DSP 分别生成 LOCAL_SIGNAL_ID_E 和 DSP_SIGNAL_ID_E。
  const localRows = parseEnumRows(workbook, 'UPM单板测点');
  const dspRows = parseEnumRows(workbook, 'UPM-DSP采集数据');
  const allNames = new Map();
  for (const [group, rows] of [['LOCAL', localRows], ['DSP', dspRows]]) {
    for (const row of rows) {
      const existing = allNames.get(row.name);
      if (existing && (existing.value !== row.value || existing.group !== group)) {
        throw new Error(`LOCAL/DSP 枚举项重名：${row.name}`);
      }
      allNames.set(row.name, { ...row, group });
    }
  }
  return { localRows, dspRows };
}

/**
 * 读取“平台公共测点映射表”，建立 C 枚举名到实际数字 signID 的映射。
 * 相同枚举重复出现且数值相同是允许的；同名不同值会立即报错。
 */
function parsePlatformSignalMap(workbook) {
  const sheetName = '平台公共测点映射表';
  const rows = makeSheetReader(workbook, sheetName).rows({
    name: ['平台测点枚举'], value: ['平台测点值'],
  });
  const result = new Map();
  for (const row of rows) {
    const name = cellText(row.name);
    const valueText = cellText(row.value);
    if (!name && !valueText) continue;
    const value = requiredInteger(row.value, sheetName, row.excelRow, '平台测点值', { min: 1 });
    const existing = result.get(name);
    if (existing !== undefined && existing !== value) {
      throw new Error(`${sheetName}!${row.excelRow} 的 ${name} 同时映射到 ${existing} 和 ${value}`);
    }
    result.set(name, value);
  }
  return result;
}

function rangeTypeInfo(value, sheetName, row) {
  const source = cellText(value).toUpperCase();
  const result = {
    U8: { dataType: 'DATA_TYPE_U8', member: 'u8', dataSize: 'sizeof(UINT8)', string: false },
    U16: { dataType: 'DATA_TYPE_U16', member: 'u16', dataSize: 'sizeof(UINT16)', string: false },
    S16: { dataType: 'DATA_TYPE_S16', member: 's16', dataSize: 'sizeof(INT16)', string: false },
    U32: { dataType: 'DATA_TYPE_U32', member: 'u32', dataSize: 'sizeof(UINT32)', string: false },
    S32: { dataType: 'DATA_TYPE_S32', member: 's32', dataSize: 'sizeof(INT32)', string: false },
    // signal_range 使用浮点类型保存 F32 的默认值和上下限。
    F32: { dataType: 'DATA_TYPE_FLOAT', member: 'f32', dataSize: 'sizeof(FLOAT)', string: false },
    STRING: { dataType: 'DATA_TYPE_STRING', member: 'pst', dataSize: null, string: true },
  }[source];
  if (!result) throw new Error(`${sheetName}!${row} 的数据类型不受支持：${source || '<空>'}`);
  return result;
}

function cStringLiteral(value) {
  return JSON.stringify(cellText(value)).replace(/\\u2028|\\u2029/g, '');
}

function optionalRangeInitializer(field, value, typeInfo, sheetName, row) {
  if (isUnconfiguredValue(value)) return '';
  if (typeInfo.string) return `, .${field}.pst = (VOID *)${cStringLiteral(value)}`;
  return `, .${field}.${typeInfo.member} = ${cToken(value, null, sheetName, row, field)}`;
}

function parseRangeRows(workbook, config, platformSignalMap) {
  const rows = makeSheetReader(workbook, config.sheetName).rows({
    description: ['数据定义'], enumName: ['ENMU'], sigId: ['signID', 'sigID'],
    dataType: ['数据类型'], dataLength: ['数据长度'], defaultValue: ['默认值'],
    minValue: ['数据下限'], maxValue: ['数据上限'],
  });
  const uniqueByNumericId = new Map();
  for (const row of rows) {
    const rawSigId = cellText(row.sigId);
    if (!cellText(row.description) || isInvalidSignalId(rawSigId)) continue;
    // 范围表只保存至少配置了一个范围值的测点。
    // 默认值、最小值、最大值全部未配置时，即使 signID 有效也跳过整行。
    if (
      isUnconfiguredValue(row.defaultValue) &&
      isUnconfiguredValue(row.minValue) &&
      isUnconfiguredValue(row.maxValue)
    ) continue;

    let numericSigId;
    if (/^\d+$/.test(rawSigId)) numericSigId = Number(rawSigId);
    else numericSigId = platformSignalMap.get(rawSigId);
    if (!Number.isInteger(numericSigId) || numericSigId < 1) {
      throw new Error(`${config.sheetName}!${row.excelRow} 的 signID“${rawSigId}”未在平台公共测点映射表中找到`);
    }

    const enumName = toUpperSnake(row.enumName, config.sheetName, row.excelRow);
    const typeInfo = rangeTypeInfo(row.dataType, config.sheetName, row.excelRow);
    const item = {
      excelRow: row.excelRow,
      description: cleanComment(row.description),
      numericSigId,
      sigId: enumName,
      isRecover: isUnconfiguredValue(row.defaultValue) ? 0 : 6,
      dataType: typeInfo.dataType,
      dataSize: typeInfo.string
        ? requiredInteger(row.dataLength, config.sheetName, row.excelRow, '数据长度', { min: 1 })
        : typeInfo.dataSize,
      defaultInitializer: optionalRangeInitializer('def_value', row.defaultValue, typeInfo, config.sheetName, row.excelRow),
      minInitializer: optionalRangeInitializer('min_value', row.minValue, typeInfo, config.sheetName, row.excelRow),
      maxInitializer: optionalRangeInitializer('max_value', row.maxValue, typeInfo, config.sheetName, row.excelRow),
    };

    const existing = uniqueByNumericId.get(numericSigId);
    if (existing && existing.sigId !== item.sigId) {
      throw new Error(`signID 数字 ${numericSigId} 同时对应 ${existing.sigId} 和 ${item.sigId}`);
    }
    if (!existing) uniqueByNumericId.set(numericSigId, item);
  }
  return [...uniqueByNumericId.values()].sort((left, right) => left.numericSigId - right.numericSigId);
}

function parseSignalRange(workbook) {
  const platformSignalMap = parsePlatformSignalMap(workbook);
  return {
    localRows: parseRangeRows(workbook, { sheetName: 'UPM单板测点' }, platformSignalMap),
    dspRows: parseRangeRows(workbook, { sheetName: 'UPM-DSP采集数据' }, platformSignalMap),
  };
}

function parseArguments(argv) {
  const options = { file: DEFAULT_EXCEL, output: DEFAULT_OUTPUT };
  for (let i = 0; i < argv.length; i += 1) {
    if (argv[i] === '--file') options.file = argv[++i];
    else if (argv[i] === '--output') options.output = argv[++i];
    else if (argv[i] === '--help' || argv[i] === '-h') options.help = true;
    else throw new Error(`未知参数：${argv[i]}`);
  }
  if (!options.file) throw new Error('--file 缺少 Excel 路径');
  if (!options.output) throw new Error('--output 缺少输出目录');
  return options;
}

async function renderTemplate(eta, templateName, data) {
  // 统一输出 CRLF 换行，减少 Windows 工程中无意义的整文件差异。
  const source = await fs.readFile(path.join(TEMPLATE_DIR, templateName), 'utf8');
  return eta.renderString(source, data).replace(/\r?\n/g, '\r\n');
}

async function main() {
  const options = parseArguments(process.argv.slice(2));
  if (options.help) {
    console.log('用法：pnpm generate [--file Excel路径] [--output 输出目录]');
    return;
  }
  const filePath = path.resolve(options.file);
  const outputDir = path.resolve(options.output);
  if (filePath === outputDir) throw new Error('输出目录不能与 Excel 源文件相同');
  const { buffer, snapshot } = await readSourceReadOnly(filePath);
  // 只解析内存 Buffer；这里没有把 Excel 路径交给任何写入接口。
  const workbook = XLSX.read(buffer, { type: 'buffer', cellFormula: true, cellText: true, cellDates: true });
  // 解析函数只整理和校验数据。任一字段不合法都会在写输出前终止。
  const collect = parseCollect(workbook);
  const processData = parseProcess(workbook);
  const transmitRows = parseTransmit(workbook);
  const enums = parseEnums(workbook);
  const signalRange = parseSignalRange(workbook);
  const xmlProtocol = parseXmlProtocol(workbook);
  const date = new Intl.DateTimeFormat('zh-CN', { timeZone: 'Asia/Shanghai' }).format(new Date());
  // C 代码对换行和反斜杠续行很敏感，因此禁用 Eta 的自动换行裁剪。
  const eta = new Eta({ autoEscape: false, autoTrim: false });
  const outputs = {
    'signal_id_map.h': await renderTemplate(eta, 'signal_id_map.h.eta', { date, ...enums }),
    'collect.c': await renderTemplate(eta, 'collect.c.eta', { date, ...collect }),
    'process.c': await renderTemplate(eta, 'process.c.eta', { date, ...processData }),
    'transmit.c': await renderTemplate(eta, 'transmit.c.eta', { date, rows: transmitRows }),
    'signal_range.c': await renderTemplate(eta, 'signal_range.c.eta', { date, ...signalRange }),
    'AIDC_UPP_slave.xml': await renderTemplate(eta, 'protocol.xml.eta', { protocol: xmlProtocol }),
  };
  // 模板渲染完成后再次确认 Excel 未变化，然后只写 output 目录。
  await assertSourceUnchanged(filePath, snapshot);
  await fs.mkdir(outputDir, { recursive: true });
  for (const [name, content] of Object.entries(outputs)) await fs.writeFile(path.join(outputDir, name), content, 'utf8');
  // 输出结束后再次校验，用于证明生成过程没有改写源 Excel。
  await assertSourceUnchanged(filePath, snapshot);
  console.log(`Excel SHA-256：${snapshot.sha256}`);
  console.log(`collect.c：${collect.rowCount} 条，${collect.groups.length} 个 UPP 模型`);
  if (collect.autoSigIdCount > 0) console.log(`collect.c 自动 sig_id：${collect.autoSigIdStart}～${collect.autoSigIdEnd}，共 ${collect.autoSigIdCount} 条`);
  console.log(`process.c：ARM ${processData.armRows.length} 条，DSP ${processData.dspRows.length} 条`);
  console.log(`transmit.c：${transmitRows.length} 条`);
  console.log(`signal_id_map.h：LOCAL ${enums.localRows.length} 项，DSP ${enums.dspRows.length} 项`);
  console.log(`signal_range.c：LOCAL ${signalRange.localRows.length} 条，DSP ${signalRange.dspRows.length} 条`);
  console.log(`AIDC_UPP_slave.xml：${xmlProtocol.models.length} 个模型，${xmlProtocol.models.reduce((sum, model) => sum + model.points.length, 0)} 个点位`);
  console.log(`输出目录：${outputDir}`);
}

if (require.main === module) {
  main().catch((error) => {
    console.error(`生成失败：${error.message}`);
    process.exitCode = 1;
  });
}

module.exports = { parseCollect, parseProcess, parseTransmit, parseEnums, parseSignalRange, parseXmlProtocol, toUpperSnake };
