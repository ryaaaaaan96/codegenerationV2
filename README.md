# UPM 测点表 C 代码生成工具

## 1. 项目作用

本项目用于读取 UPM 项目测点 Excel，并自动生成 UPM ARM 工程需要使用的 C 配置代码。

项目主要解决以下问题：

1. 将 Excel 中维护的测点、通信协议、Modbus 地址和信号 ID 转换为 C 代码。
2. 自动生成 collect 采集表、process 信号处理表、transmit Modbus 转发表和信号 ID 枚举。
3. 使用统一模板生成代码，避免人工复制大量测点数据时出现遗漏、格式错误或地址填写错误。
4. 当 Excel 数据更新后，可以重新运行脚本生成最新代码。
5. 以只读方式打开 Excel，避免 Node.js 脚本修改或破坏源表。

项目包含两个 Node.js 脚本：

- `read-upm-excel.js`：只读查看 Excel 的工作表、行列和单元格内容，主要用于检查数据。
- `generate-code.js`：读取 Excel，整理不同工作表的数据，通过 Eta 模板生成 C/H 文件。

最终生成以下文件：

```text
output/collect.c
output/process.c
output/transmit.c
output/signal_id_map.h
output/signal_range.c
output/AIDC_UPP_slave.xml
```

其中：

- `collect.c`：DSP UPP 数据采集配置。
- `process.c`：ARM 和 DSP 信号处理配置。
- `transmit.c`：UPM 对外提供的 Modbus 转发表。
- `signal_id_map.h`：LOCAL 和 DSP 信号枚举与 signID 的映射。
- `signal_range.c`：LOCAL 和 DSP 测点的默认值、上下限及恢复配置。
- `AIDC_UPP_slave.xml`：由独立 JSON 协议配置生成的 UPP slave XML。

## 2. Excel 文件来源与工作表说明

`UPM项目测点数据表.xlsx` 的原始版本是一个**钉钉在线文档**。本项目使用的是从钉钉下载到当前目录的本地 `.xlsx` 文件。

使用时需要注意：

1. 测点数据应当先在钉钉在线文档中维护和确认。
2. 需要生成 C 代码时，从钉钉下载最新的 Excel 文件。
3. 将下载文件放到本项目根目录，并保持文件名为 `UPM项目测点数据表.xlsx`。
4. 关闭或完成正在进行的 Excel 保存操作，再运行 Node.js 脚本。
5. Node.js 脚本只读取本地副本，不会修改钉钉在线文档，也不会写回本地 Excel。

如果钉钉在线文档内容发生变化，需要重新下载 Excel，脚本不会自动连接钉钉或自动同步。

### 2.1 工作表职责

| 表格名称 | 数据内容 / 定位 | 数据范围 | 开发/维护人员 | 查看/使用人员 | 文件性质 |
| --- | --- | --- | --- | --- | --- |
| `DSP内部数据` | DSP 内部使用和管理的数据 | DSP 内部数据 | DSP 开发人员、ARM-DSP 通讯负责人 | DSP 开发人员、ARM-DSP 通讯负责人 | 源数据 |
| `UPM-DSP手动配置数据` | UPM ARM 板卡内部使用的手动配置数据 | ARM 内部数据 | ARM 开发人员 | ARM 开发人员 | 源数据 |
| `UPM-DSP采集数据` | UPM ARM 板卡与 DSP 之间的通信协议数据 | ARM ↔ DSP 通信数据 | ARM-DSP 通讯负责人 | ARM 开发人员、DSP 通信开发人员 | 通信协议数据 |
| `UPM单板测点` | UPM ARM 板卡对外进行 Modbus 转发的数据，仅包含 ARM 自身部分 | ARM 自身对外数据 | ARM 开发人员 | ARM 开发人员 | 中间文件 |
| `UPM板内Modbus地址分配` | 统一定义 UPM 板内各功能和模块的 Modbus 地址段 | 板内 Modbus 地址规划 | ARM 开发人员 | ARM 开发人员、Modbus 开发人员 | 地址配置数据 |
| `iconfig使用` | UPM ARM 板卡最终对外提供的 Modbus 通信总表，由 UPM-DSP采集数据、UPM单板测点和板内 Modbus 地址规划共同形成 | ARM + DSP 完整 Modbus 数据 | ARM 开发人员 | 所有需要使用 Modbus 进行开发的人员 | 最终发布/使用文件 |

### 2.2 整体数据链路

```text
DSP 侧
────────────────────────────────────
DSP内部数据
     │
     │ DSP 相关数据
     ▼
UPM-DSP采集数据
     │                         │
     │ ARM 与 DSP 通信数据     │
     └─────────────────────────┤
                               ├──→ iconfig使用
                               │     （最终 Modbus 总表）
UPM单板测点 ───────────────────┘
     ▲
     │
ARM 自身测点

UPM板内Modbus地址分配 ─────────┘
     提供各功能和模块的地址段起点


ARM 侧另外维护
────────────────────────────────────
UPM-DSP手动配置数据
     │
     └── ARM 内部配置使用，并为需要上传 CSU 的 DSP 测点补充配置
```

简单来说：`UPM-DSP采集数据` 提供 DSP 数据，`UPM单板测点` 提供 ARM 自身数据，`UPM板内Modbus地址分配` 提供地址段基址，最终共同形成 `iconfig使用`，供所有需要进行 Modbus 开发的人员使用。

`UPM板内Modbus地址分配` 包含“地址段功能”“地址段起点”“地址段终点”三列。当前模块地址段从模块1的 `50000～50999` 开始，每个模块占用 1000 个地址，直到模块8的 `57000～57999`。`iconfig使用` 生成 DSP 寄存器地址时，会使用模块的“地址段起点”加上 `UPM-DSP采集数据` 中对应测点的 Modbus 偏移地址。修改地址规划时必须检查地址段是否重叠，并重新核对 `iconfig使用` 的最终地址。

## 3. 环境准备与基本使用

### 3.1 环境准备

需要 Node.js 18 或更高版本，以及 pnpm。检查版本：

```powershell
node --version
pnpm --version
$PSVersionTable.PSVersion
```

第一次使用时，在当前目录安装依赖：

```powershell
pnpm install
```

主要依赖：

- `xlsx`：读取 Excel，并取得文件中缓存的公式计算结果。
- `exceljs`：供只读预览脚本使用。
- `eta`：C 代码模板引擎，作用类似 Python 的 Mako。

### 3.2 查看 Excel 内容

查看默认工作表的前 20 行：

```powershell
pnpm read
```

查看指定工作表的前 50 行：

```powershell
node .\read-upm-excel.js --sheet "UPM-DSP采集数据" --limit 50
```

以 JSON 格式输出或读取另一个文件：

```powershell
pnpm read:json
node .\read-upm-excel.js --file "D:\其他目录\测点表.xlsx" --sheet "iconfig使用" --limit 20
```

查看全部参数：

```powershell
node .\read-upm-excel.js --help
```

如果需要保存 JSON，请保存为新的 `.json` 文件，绝对不要把目标写成源 `.xlsx`：

```powershell
pnpm read:json > upm-data.json
```

### 3.3 生成 C 文件

使用默认 Excel 和默认输出目录：

```powershell
pnpm generate
```

生成成功后会显示 Excel 的 SHA-256、记录数量和输出目录。生成文件包括：

```text
output/collect.c
output/process.c
output/transmit.c
output/signal_id_map.h
output/signal_range.c
```

指定其他 Excel 或输出目录：

```powershell
pnpm generate -- --file "D:\其他目录\测点表.xlsx" --output ".\my-output"
```

查看参数：

```powershell
node .\generate-code.js --help
```

每次修改 Excel、模板或生成规则后，都重新运行 `pnpm generate`。`output` 中的文件会在下次生成时覆盖，不建议手工修改。

### 3.4 生成 UPP slave XML

XML 已合并到 `generate-code.js`，与 C/H 文件使用同一个 Excel 数据源。执行：

```powershell
pnpm generate
```

会同时生成 `output/AIDC_UPP_slave.xml`。XML 数据来自 `UPM-DSP采集数据`：

- `UPP地址` 用作 `<model Name>` 和 `<model No>`，相同地址的测点归入同一模型。
- 中文“数据定义”、`数据长度`、`UPP偏移` 分别生成 `DataName`、`RegLen`、`OffsetAddr`。
- `STRING/U16/F32` 分别映射为 `OutDataType=12/4/6`。
- `RO/RW/WO` 分别映射为 `RwMode=R/RW/W`。
- 所有具有“数据定义”的测点都会写入 XML，与 `signID` 是否配置无关。
- `DevCode` 固定为 `2`，模型 `Type` 固定为 `YC`，`YXMerge` 和 `ChgUpload` 固定为 `0`。
- 同一 UPP 模型出现重复偏移时停止生成并报告 Excel 行号。

## 4. C 代码生成规则与实现

### 4.1 Excel 到 C 文件的映射

#### collect.c

数据来源：`UPM-DSP采集数据`。

- 所有具有“数据定义”的行都会生成。
- 按 `UPP地址` 分组，生成 `g_dsp_upp_collect_*` 数组。
- `signID` 有效时，使用 `ENMU` 转换后的枚举名。
- `signID` 是空值、`0`、`/` 或 `※` 时仍生成，并按 Excel 行顺序将 `.sig_id` 从 `30000` 开始连续编号。
- 自动编号区间与 Excel 中已有的数字 `signID` 重叠时停止生成并报告冲突行。
- `设置优先级`、`轮询优先级` 等可选整数为 `/` 或 `※` 时使用默认值 `0`。

#### process.c

数据来源：

- `g_arm_data_table`：`UPM单板测点`
- `g_dsp_data_table`：`UPM-DSP采集数据`

`signID` 是空值、`0`、`/` 或 `※` 的行会跳过。

#### transmit.c

数据来源：`iconfig使用`。

- 无效 `sigID` 行跳过。
- `北向二级分类 = 系统` 映射为 `CFG_DEV_LOCAL`。
- `模块1` 到 `模块8` 映射为 `CFG_DEV_DSP1` 到 `CFG_DEV_DSP8`。
- 根据“读/写”列决定 Modbus 功能码：`RO` 映射为 `0x04`。
- 根据“读/写”列决定 Modbus 功能码：`RW` 映射为 `0x03`。
- 不使用 `0x10`。

#### signal_id_map.h

- `UPM单板测点` 生成 `LOCAL_SIGNAL_ID_E`。
- `UPM-DSP采集数据` 生成 `DSP_SIGNAL_ID_E`。
- `ENMU` 转换为全大写、下划线分隔的 C 枚举名。
- 例如 `ParamProductType` 转换为 `PARAM_PRODUCT_TYPE`。
- 同名同值的枚举只生成一次；同名不同值会报错。

#### signal_range.c

数据来源：

- LOCAL 范围表：`UPM单板测点`
- DSP 范围表：`UPM-DSP采集数据`
- LOCAL 的数字 signID 映射：`平台公共测点映射表`

生成规则：

- `signID` 为空、`0`、`/` 或 `※` 的行跳过。
- 默认值、数据下限、数据上限三项全部没有配置时，整行跳过。
- `signID` 本身是数字时直接使用；是 C 枚举名时到 `平台公共测点映射表` 查询数字。
- LOCAL 和 DSP 分别按照最终数字 signID 从小到大排序，以保证二分查找正确。
- 多行对应同一个数字 signID 和同一个枚举时只生成一次。
- “默认值”有内容时，`is_recover` 生成 `6`；没有默认值时生成 `0`。
- 默认值、数据下限、数据上限有内容时才生成对应初始化字段；没有内容时省略，由 C 静态初始化自动补零。
- Excel 数据类型 `F32` 在范围表中生成 `DATA_TYPE_FLOAT`，数值使用联合体成员 `.f32`。
- DSP1～DSP8 共用同一张 DSP 范围表。

### 4.2 模板目录

模板位于：

```text
templates/collect.c.eta
templates/process.c.eta
templates/transmit.c.eta
templates/signal_id_map.h.eta
templates/signal_range.c.eta
templates/protocol.xml.eta
```

Eta 模板的常见写法：

```eta
<% it.rows.forEach((row) => { %>
    .sig_id = <%~ row.sigId %>
<% }) %>
```

- `<% ... %>`：执行 JavaScript，例如循环。
- `<%~ ... %>`：把值输出到生成文件。
- `it`：`generate-code.js` 传给模板的数据对象。

只改变 C 文件排版或固定代码时修改 `.eta` 模板；改变字段转换、跳过规则或校验规则时修改 `generate-code.js`。

### 4.3 generate-code.js 的工作过程

1. 解析 `--file` 和 `--output` 参数。
2. 使用 `fs.open(filePath, 'r')` 以只读权限打开 Excel。
3. 读取到内存 `Buffer`，记录大小、修改时间和 SHA-256。
4. 使用 `xlsx` 解析内存数据。
5. 调用 `parseCollect`、`parseProcess`、`parseTransmit`、`parseEnums`、`parseSignalRange`、`parseXmlProtocol` 整理数据。
6. 使用 Eta 把数据填入六个模板。
7. 再次检查源 Excel 是否变化。
8. 只向指定输出目录写入 C/H 文件。
9. 输出结束后再次检查 Excel，并打印生成数量。

表头匹配会自动忽略空格和换行。因此只调整列顺序，或者把“数据长度”显示成两行，通常不用修改脚本；如果列名本身改变，则要同步更新解析函数里的字段名称。

## 5. 如何修改生成规则

常见修改位置：

- collect：`parseCollect()`
- process：`parseProcess()`、`parseProcessRows()`
- transmit：`parseTransmit()`
- LOCAL/DSP 枚举：`parseEnums()`、`parseEnumRows()`
- 默认值和范围表：`parseSignalRange()`、`parseRangeRows()`
- UPP slave XML：`parseXmlProtocol()`、`mapXmlDataType()`、`mapXmlRwMode()`
- 数据类型：`mapDataType()`
- 设备分类：`mapDeviceId()`
- Modbus 功能码：`mapAccessMode()`
- 空值和占位符：`isUnconfiguredValue()`、`isInvalidSignalId()`

建议修改步骤：

1. 确认 Excel 的工作表名、表头和实际值。
2. 修改解析或映射函数，并保留明确的错误提示。
3. 只有输出格式变化时，优先修改模板。
4. 执行 `pnpm generate`。
5. 检查输出数量，以及文件中是否出现 `undefined`、`※` 等异常内容。
6. 确认运行前后打印的 Excel SHA-256 没有变化。

## 6. 常见错误

### Cannot find module

例如 `Cannot find module 'xlsx'`，表示依赖尚未安装：

```powershell
pnpm install
```

### 缺少工作表或列

表示工作表名或表头发生变化。按照错误提示检查名称，再更新脚本中的字段映射。

### 某字段必须是整数

表示本应填写数字的单元格出现了其他内容。错误会指出工作表、Excel 行号和字段名，检查它是错误数据还是新占位符。

### 生成期间 Excel 源文件发生变化

可能是生成过程中有人保存了 Excel。等待保存完成或关闭正在编辑该表的程序，再重新执行。

## 7. 为什么不会修改 Excel

生成器没有 Excel 保存功能，并有三层保护：

- 文件句柄使用只读模式 `r`。
- `xlsx` 只解析内存 Buffer，没有调用工作簿写入方法。
- 生成前后校验文件大小、修改时间和 SHA-256。

脚本会覆盖输出目录中同名的 `.c` 和 `.h` 文件，这是正常行为；源 `.xlsx` 不会被覆盖。
