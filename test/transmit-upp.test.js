'use strict';

const test = require('node:test');
const assert = require('node:assert/strict');
const fs = require('node:fs');
const path = require('node:path');
const XLSX = require('xlsx');
const { Eta } = require('eta');
const { parseTransmitUpp } = require('../generate-code');

function workbook(rows) {
  return { Sheets: { 'CSU-UPM采集数据': XLSX.utils.aoa_to_sheet([
    ['数据来源', '数据定义', 'ENMU', '数据类型', '数据\r\n长度', 'UPP地址', 'UPP偏移', '读写\r\n权限'],
    ...rows,
  ]) } };
}
const point = ['UPM', '休眠动作', 'UPM_SIG_SLEEP_CTRL', 'U16', 2, 134, 8, 'RW'];

test('按源表生成模型和本地枚举，过滤 CSU 本地行和增量只写命令', () => {
  const data = parseTransmitUpp(workbook([
    point,
    ['CSU', '本地状态', null, null, null, null, null, null],
    ['UPM', '只写命令', 'UPM_SIG_COMMAND', 'U16', 2, 135, 6, 'WO'],
    ['UPM', '温度', 'UPM_SIG_TEMP', 'S16', 2, 131, 22, 'RO'],
  ]));
  assert.deepEqual(data.groups.map((g) => g.modelId), [131, 134, 135]);
  assert.deepEqual(data.incrementGroups.map((g) => g.modelId), [131, 134]);
  assert.equal(data.rowCount, 3);
  const template = fs.readFileSync(path.join(__dirname, '../templates/transmit_upp.c.eta'), 'utf8');
  const output = new Eta({ autoEscape: false, autoTrim: false }).renderString(template, data);
  assert.match(output, /\.sig_id = UPM_SIG_SLEEP_CTRL/);
  assert.match(output, /\.mod_data_type = UPP_DATA_TYPE_S16/);
  assert.match(output, /g_dcdc1_vir_upp_transmit_table\[\]/);
  assert.doesNotMatch(output, /g_dcdc1_vir_upp_increment_135|undefined/);
});

test('缺字段、无效权限和模型内重叠均报错；偏移零合法', () => {
  const missing = [...point]; missing[2] = null; missing[3] = null;
  assert.throws(() => parseTransmitUpp(workbook([missing])), /CSU-UPM采集数据!2.*ENMU、数据类型/);
  const noOffset = [...point]; noOffset[6] = null;
  assert.throws(() => parseTransmitUpp(workbook([noOffset])), /缺少必填字段：UPP偏移/);
  const invalid = [...point]; invalid[7] = 'BAD';
  assert.throws(() => parseTransmitUpp(workbook([invalid])), /读写权限不受支持/);
  const overlap = [...point]; overlap[6] = 9;
  assert.throws(() => parseTransmitUpp(workbook([point, overlap])), /数据范围重叠/);
  const zero = [...point]; zero[6] = 0;
  assert.equal(parseTransmitUpp(workbook([zero])).groups[0].rows[0].offset, 0);
});
