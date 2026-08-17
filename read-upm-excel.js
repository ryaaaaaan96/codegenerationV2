#!/usr/bin/env node

/**
 * UPM 项目测点数据表——只读读取脚本
 *
 * 整体执行流程：
 * 1. 从命令行中读取文件路径、工作表名称等参数；
 * 2. 以操作系统的只读模式（r）打开 Excel 文件；
 * 3. 把文件内容读入内存中的 Buffer；
 * 4. 让 ExcelJS 从 Buffer 解析工作簿；
 * 5. 再次读取源文件并校验哈希，确认它没有发生变化；
 * 6. 将指定工作表的前若干行输出到终端。
 *
 * 这个脚本没有调用 ExcelJS 的 write、writeFile 或 save 方法，
 * 因此不会将解析后的工作簿保存回源 Excel 文件。
 */

// 启用 JavaScript 严格模式，可以让一些容易忽略的代码错误更早暴露出来。
'use strict';

// require() 用于加载模块。
// 前缀“node:”表示这些模块由 Node.js 自带，不需要通过 npm 安装。
// fs/promises 提供基于 Promise 的异步文件操作，因此可以配合 async/await 使用。
const fs = require('node:fs/promises');
// path 用于安全地拼接和解析 Windows、Linux 等系统上的文件路径。
const path = require('node:path');
// crypto 用于计算文件的 SHA-256 哈希值，帮助确认源文件没有变化。
const crypto = require('node:crypto');
// ExcelJS 是第三方依赖，负责解析 .xlsx 文件，需要先运行 npm install。
const ExcelJS = require('exceljs');

// __dirname 是当前脚本所在目录，而不是运行命令时所在的目录。
// 所以即使从其他目录启动脚本，默认也会查找与脚本放在一起的 Excel 文件。
const DEFAULT_FILE = path.join(__dirname, 'UPM项目测点数据表.xlsx');

/**
 * 计算一段二进制数据的 SHA-256 哈希。
 *
 * Buffer 是 Node.js 用来保存二进制数据的对象。Excel 文件不是普通文本，
 * 因此读取后应保存在 Buffer 中，而不能按 UTF-8 字符串处理。
 *
 * @param {Buffer} buffer Excel 文件的二进制内容
 * @returns {string} 由 64 个十六进制字符组成的 SHA-256
 */
function sha256(buffer) {
  // createHash 创建计算器，update 放入数据，digest('hex') 取得十六进制结果。
  return crypto.createHash('sha256').update(buffer).digest('hex');
}

/**
 * 严格以只读方式读取一个文件，并记录读取时的文件信息。
 *
 * async 表示这是异步函数，它一定返回 Promise。
 * 调用它时要使用 await，等待文件读取完成后再继续执行。
 *
 * @param {string} filePath 要读取的文件路径
 * @returns {Promise<{buffer: Buffer, snapshot: object}>}
 */
async function readFileStrictlyReadOnly(filePath) {
  // “r”是 read（读取）模式。操作系统不会给 handle 任何写入权限。
  // 如果文件不存在，fs.open 会直接抛出错误，也不会创建新文件。
  const handle = await fs.open(filePath, 'r');

  // try/finally 可以保证：无论读取成功还是中途出错，finally 都会执行。
  // 这对文件句柄尤其重要，否则文件可能一直处于被进程占用的状态。
  try {
    // stat() 获取文件大小、修改时间、文件类型等元数据，但不会修改文件。
    const stat = await handle.stat();
    if (!stat.isFile()) {
      throw new Error(`不是普通文件：${filePath}`);
    }

    // readFile() 通过上面以“r”模式打开的句柄，把全部内容读入内存 Buffer。
    const buffer = await handle.readFile();

    // 返回两个部分：
    // buffer 交给 ExcelJS 解析；snapshot 用于之后检查文件是否发生变化。
    return {
      buffer,
      snapshot: {
        size: stat.size,
        // mtimeMs 是文件最后修改时间，单位是毫秒。
        mtimeMs: stat.mtimeMs,
        sha256: sha256(buffer),
      },
    };
  } finally {
    // 主动关闭文件句柄。本行不会保存文件，只是释放操作系统资源。
    await handle.close();
  }
}

/**
 * 对比读取前后的文件快照，确认源 Excel 没有变化。
 *
 * 同时比较大小、修改时间和文件内容哈希。哈希不同表示二进制内容不同。
 *
 * @param {string} filePath 源文件路径
 * @param {{size: number, mtimeMs: number, sha256: string}} before 解析前的快照
 */
async function assertSourceUnchanged(filePath, before) {
  // 再以只读方式读取一次。解构赋值把返回对象中的 snapshot 改名为 after。
  const { snapshot: after } = await readFileStrictlyReadOnly(filePath);

  // && 表示三个条件必须同时成立，文件才会被认为没有变化。
  const unchanged =
    before.size === after.size &&
    before.mtimeMs === after.mtimeMs &&
    before.sha256 === after.sha256;

  if (!unchanged) {
    throw new Error(`安全校验失败：读取期间源文件发生了变化：${filePath}`);
  }
}

/**
 * 只读加载工作簿。
 *
 * 参数后面的“= DEFAULT_FILE”表示：调用者没有传入路径时使用默认文件。
 * 注意：ExcelJS 接收的是内存 Buffer，本函数不会把工作簿保存回源路径。
 *
 * @param {string} inputPath Excel 文件路径
 * @returns {Promise<{filePath: string, workbook: ExcelJS.Workbook, source: object}>}
 */
async function readWorkbookReadOnly(inputPath = DEFAULT_FILE) {
  // resolve() 把相对路径转换为完整的绝对路径，便于显示和排查问题。
  const filePath = path.resolve(inputPath);

  // 这是对象解构：只取函数返回结果里的 buffer 和 snapshot 两个属性。
  const { buffer, snapshot } = await readFileStrictlyReadOnly(filePath);

  // 创建内存中的工作簿对象。此时它还没有加载任何 Excel 数据。
  const workbook = new ExcelJS.Workbook();

  // load(buffer) 仅解析内存数据。这里没有传入源路径，也没有调用写入方法。
  await workbook.xlsx.load(buffer);

  // 解析结束后立刻检查源文件，若内容有变化则终止并报告错误。
  await assertSourceUnchanged(filePath, snapshot);

  return { filePath, workbook, source: snapshot };
}

/**
 * 把 ExcelJS 中可能出现的不同单元格类型转换成适合打印/JSON 的值。
 *
 * 普通字符串和数字可以直接返回；日期、公式、超链接等是特殊对象，
 * 需要分别处理，否则终端中的结果不易阅读。
 */
function normalizeCellValue(value) {
  // Excel 空白单元格可能是 null 或 undefined，统一转换为 null。
  if (value === null || value === undefined) return null;

  // 日期转换为 ISO 字符串，例如 2026-08-14T00:00:00.000Z。
  if (value instanceof Date) return value.toISOString();

  // typeof null 也是 object，但前面已经排除了 null。
  if (typeof value === 'object') {
    // 富文本可能由多个不同格式的文字片段构成，这里只拼接文字内容。
    if (Array.isArray(value.richText)) {
      // map() 取出每个片段的 text，join('') 再把它们连接起来。
      return value.richText.map((part) => part.text).join('');
    }
    // 公式单元格同时保留公式本身和 Excel 文件中缓存的计算结果。
    if (Object.prototype.hasOwnProperty.call(value, 'formula')) {
      return { formula: value.formula, result: normalizeCellValue(value.result) };
    }
    // sharedFormula 是 Excel 为减少文件体积而使用的共享公式形式。
    if (Object.prototype.hasOwnProperty.call(value, 'sharedFormula')) {
      return {
        sharedFormula: value.sharedFormula,
        result: normalizeCellValue(value.result),
      };
    }
    // 超链接既有显示文字，也有实际跳转地址，因此两者都保留。
    if (Object.prototype.hasOwnProperty.call(value, 'hyperlink')) {
      // ?? 表示只有左侧是 null 或 undefined 时才使用右侧默认值。
      return { text: value.text ?? '', hyperlink: value.hyperlink };
    }
    // 如果 Excel 单元格保存的是 #VALUE!、#REF! 等错误，保留错误内容。
    if (Object.prototype.hasOwnProperty.call(value, 'error')) {
      return { error: value.error };
    }
  }

  // 普通字符串、数字、布尔值等不需要转换，直接返回。
  return value;
}

/**
 * 把一个工作表转换为二维数组。
 *
 * 返回结果类似：
 * [
 *   ['测点名称', '地址'],
 *   ['电压', 1001]
 * ]
 *
 * @param {ExcelJS.Worksheet} worksheet ExcelJS 工作表对象
 * @param {number} limit 最多读取多少行
 * @returns {Array<Array<unknown>>} 行和列组成的二维数组
 */
function worksheetToRows(worksheet, limit = Number.POSITIVE_INFINITY) {
  // rows 用于保存最终结果。const 表示变量不能重新指向另一个数组，
  // 但仍然可以通过 push() 给当前数组添加内容。
  const rows = [];

  // Math.min 防止读取行数超过工作表实际行数。
  const maxRow = Math.min(worksheet.rowCount, limit);

  // Excel 的行号和列号都从 1 开始，所以循环也从 1 开始。
  for (let rowNumber = 1; rowNumber <= maxRow; rowNumber += 1) {
    const row = worksheet.getRow(rowNumber);
    const values = [];

    // 逐列读取当前行，每个单元格的值都先交给 normalizeCellValue()。
    for (let columnNumber = 1; columnNumber <= worksheet.columnCount; columnNumber += 1) {
      values.push(normalizeCellValue(row.getCell(columnNumber).value));
    }

    // 一行读取完成后，把这一行加入二维数组。
    rows.push(values);
  }

  return rows;
}

/**
 * 解析命令行参数。
 *
 * 例如执行：node read-upm-excel.js --sheet Sheet1 --limit 50 --json
 * argv 将是：['--sheet', 'Sheet1', '--limit', '50', '--json']。
 */
function parseArguments(argv) {
  // 先定义所有参数的默认值，用户传入参数后再逐项覆盖。
  const options = { file: DEFAULT_FILE, sheet: null, limit: 20, json: false };

  for (let index = 0; index < argv.length; index += 1) {
    const argument = argv[index];
    if (argument === '--file') {
      // ++index 先移动到下一个参数，再把它作为文件路径。
      options.file = argv[++index];
    } else if (argument === '--sheet') {
      options.sheet = argv[++index];
    } else if (argument === '--limit') {
      // 命令行参数都是字符串，parseInt(..., 10) 将行数转换为十进制整数。
      options.limit = Number.parseInt(argv[++index], 10);
    } else if (argument === '--json') {
      options.json = true;
    } else if (argument === '--help' || argument === '-h') {
      options.help = true;
    } else if (!argument.startsWith('-')) {
      // 没有“--”前缀的参数被当作 Excel 文件路径，方便简写。
      options.file = argument;
    } else {
      throw new Error(`未知参数：${argument}`);
    }
  }

  if (!options.file) throw new Error('--file 缺少文件路径');
  if (!Number.isInteger(options.limit) || options.limit < 1) {
    throw new Error('--limit 必须是大于 0 的整数');
  }
  return options;
}

function printHelp() {
  // 反引号包围的是模板字符串，允许直接书写多行文本。
  console.log(`用法：
  npm run read
  node read-upm-excel.js [文件路径] [--sheet 工作表名] [--limit 行数] [--json]

参数：
  --file <路径>    Excel 文件路径（默认：UPM项目测点数据表.xlsx）
  --sheet <名称>   只查看指定工作表（默认：第一个工作表）
  --limit <行数>   最大读取行数（默认：20）
  --json           以 JSON 格式输出
  -h, --help       显示帮助`);
}

async function main() {
  // process.argv 前两项通常是 Node 路径和脚本路径，slice(2) 只保留用户参数。
  const options = parseArguments(process.argv.slice(2));
  if (options.help) {
    printHelp();
    // return 提前结束 main，不再读取 Excel。
    return;
  }

  // await 会暂停 main，直到异步读取和解析完成。
  const { filePath, workbook, source } = await readWorkbookReadOnly(options.file);

  // 三元运算符“条件 ? 值1 : 值2”：
  // 指定 --sheet 时按名称查找，否则选择第一个工作表。
  const worksheet = options.sheet
    ? workbook.getWorksheet(options.sheet)
    : workbook.worksheets[0];

  if (!worksheet) {
    // map() 取出名称，join('、') 把名称连接成便于阅读的字符串。
    const available = workbook.worksheets.map((sheet) => sheet.name).join('、');
    throw new Error(`找不到工作表“${options.sheet}”。可用工作表：${available}`);
  }

  // 整理统一的输出对象。无论普通模式还是 JSON 模式，数据来源都相同。
  const result = {
    file: filePath,
    sourceSha256: source.sha256,
    // 箭头函数 (sheet) => (...) 对每个工作表生成一个摘要对象。
    sheets: workbook.worksheets.map((sheet) => ({
      name: sheet.name,
      rowCount: sheet.rowCount,
      columnCount: sheet.columnCount,
    })),
    selectedSheet: worksheet.name,
    rows: worksheetToRows(worksheet, options.limit),
  };

  if (options.json) {
    // JSON.stringify 的第三个参数 2 表示使用两个空格缩进，便于人阅读。
    console.log(JSON.stringify(result, null, 2));
    return;
  }

  // 普通模式使用 console.table，以表格形式在终端中显示结果。
  console.log(`文件：${result.file}`);
  console.log(`SHA-256：${result.sourceSha256}`);
  console.log('工作表：');
  console.table(result.sheets);
  console.log(`预览“${result.selectedSheet}”前 ${result.rows.length} 行：`);
  console.table(result.rows);
}

// require.main === module 表示当前文件是用户直接执行的入口脚本。
// 如果它被其他文件 require()，则不会自动运行 main()。
if (require.main === module) {
  // main 是异步函数。
  // catch 捕获读取失败、参数错误等异常，避免显示一大段不友好的调用栈。
  main().catch((error) => {
    console.error(`读取失败：${error.message}`);
    // 设置退出码为 1，告诉操作系统本次执行失败；不会强制中断尚未完成的输出。
    process.exitCode = 1;
  });
}

// 导出两个函数，其他 Node.js 文件可以通过 require('./read-upm-excel') 使用。
// 这里同样只提供读取和转换功能，不提供任何 Excel 写入函数。
module.exports = {
  readWorkbookReadOnly,
  worksheetToRows,
};
