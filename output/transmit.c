/**********************************************************************
 * @file       transmit.c
 * @brief      自动生成的 Modbus 转发表，请勿手工修改
 * @version    V1.0.0
 * @date       2026/8/17
 * @author     Ryan
 * Copyright   1997-2030 SUNGROW.All Rights Reserved.
 ***********************************************************************/
#include "arc_public.h"
#include "data_process.h"
#include "port.h"
#include "collect_lib.h"
#include "transmit_lib.h"
#include "local_equip.h"
#include "dev_cfg.h"
#include "pub_sig_def.h"
#include "signal_id_map.h"

const MB_TABLE_CELL_T g_arm_transmit_table_t[] = {
    /* 设备转发地址（Excel 第 2 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_TR_ADDR, .reg_type = 0x03,
     .reg_addr = 41654, .reg_num = 1},
    /* 平台软件发布版本（Excel 第 3 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_VER_PUBLISH, .reg_type = 0x03,
     .reg_addr = 2815, .reg_num = 1},
    /* 平台软件构建版本（Excel 第 4 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_VER_BUILD, .reg_type = 0x03,
     .reg_addr = 2816, .reg_num = 1},
    /* 平台软件补丁版本（Excel 第 5 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_VER_HOTFIX, .reg_type = 0x03,
     .reg_addr = 2817, .reg_num = 1},
    /* 设备序列号（Excel 第 6 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DEV_SN, .reg_type = 0x04,
     .reg_addr = 31811, .reg_num = 10},
    /* 串口1波特率（Excel 第 7 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_UART_PORT1_BAUD, .reg_type = 0x04,
     .reg_addr = 41655, .reg_num = 2},
    /* 串口1奇偶校验（Excel 第 8 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_UART_PORT1_PARITY, .reg_type = 0x04,
     .reg_addr = 41657, .reg_num = 2},
    /* 串口1停止位（Excel 第 9 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_UART_PORT1_STOP_BITS, .reg_type = 0x04,
     .reg_addr = 41659, .reg_num = 2},
    /* 串口2波特率（Excel 第 10 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_UART_PORT2_BAUD, .reg_type = 0x04,
     .reg_addr = 41661, .reg_num = 2},
    /* 串口2奇偶校验（Excel 第 11 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_UART_PORT2_PARITY, .reg_type = 0x04,
     .reg_addr = 41663, .reg_num = 2},
    /* 串口2停止位（Excel 第 12 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_UART_PORT2_STOP_BITS, .reg_type = 0x04,
     .reg_addr = 41665, .reg_num = 2},
    /* 串口3波特率（Excel 第 13 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_UART_PORT3_BAUD, .reg_type = 0x04,
     .reg_addr = 41667, .reg_num = 2},
    /* 串口3奇偶校验（Excel 第 14 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_UART_PORT3_PARITY, .reg_type = 0x04,
     .reg_addr = 41669, .reg_num = 2},
    /* 串口3停止位（Excel 第 15 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_UART_PORT3_STOP_BITS, .reg_type = 0x04,
     .reg_addr = 41671, .reg_num = 2},
    /* 以太网DHCP使能开关（Excel 第 16 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_ETH_DHCP_ENABLE, .reg_type = 0x04,
     .reg_addr = 41851, .reg_num = 1},
    /* 以太网IP（Excel 第 17 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_ETH_IP, .reg_type = 0x04,
     .reg_addr = 41852, .reg_num = 8},
    /* 以太网子网掩码（Excel 第 18 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_ETH_MASK, .reg_type = 0x04,
     .reg_addr = 41860, .reg_num = 8},
    /* 以太网网关（Excel 第 19 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_ETH_GATEWAY, .reg_type = 0x04,
     .reg_addr = 41868, .reg_num = 8},
    /* 以太网DNS1（Excel 第 20 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_ETH_DNS1, .reg_type = 0x04,
     .reg_addr = 41876, .reg_num = 8},
    /* 以太网DNS2（Excel 第 21 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_ETH_DNS2, .reg_type = 0x04,
     .reg_addr = 41884, .reg_num = 8},
    /* dsp的数量规格,修改该测点需要保证所有设备已经关机（Excel 第 22 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_NUM, .reg_type = 0x04,
     .reg_addr = 41651, .reg_num = 1},
    /* 查询DSP在线状态（Excel 第 23 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_ON_LINE_NUM, .reg_type = 0x03,
     .reg_addr = 16409, .reg_num = 1},
    /* 查询DSP在线状态（Excel 第 24 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_ON_LINE_NUM, .reg_type = 0x03,
     .reg_addr = 30097, .reg_num = 1},
    /* 查询DSP在线状态（Excel 第 25 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_ON_LINE_NUM, .reg_type = 0x03,
     .reg_addr = 31806, .reg_num = 1},
    /* NTP服务器（Excel 第 26 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_NTP_SERVER, .reg_type = 0x04,
     .reg_addr = 41896, .reg_num = 32},
    /* NTP对时时间间隔 单位:秒（Excel 第 27 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_NTP_TIME_INTERVAL, .reg_type = 0x04,
     .reg_addr = 41894, .reg_num = 2},
    /* NTP对时成功时间（Excel 第 28 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_NTP_SYNC_TIME, .reg_type = 0x04,
     .reg_addr = 41928, .reg_num = 16},
    /* 未绑定的DSP数量（Excel 第 29 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_NOT_BOUND_DSP_NUM, .reg_type = 0x03,
     .reg_addr = 31916, .reg_num = 1},
    /* DSP设备SN数据池-SN1（Excel 第 30 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_1, .reg_type = 0x04,
     .reg_addr = 41689, .reg_num = 10},
    /* DSP设备SN数据池-SN2（Excel 第 31 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_2, .reg_type = 0x04,
     .reg_addr = 41699, .reg_num = 10},
    /* DSP设备SN数据池-SN3（Excel 第 32 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_3, .reg_type = 0x04,
     .reg_addr = 41709, .reg_num = 10},
    /* DSP设备SN数据池-SN4（Excel 第 33 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_4, .reg_type = 0x04,
     .reg_addr = 41719, .reg_num = 10},
    /* DSP设备SN数据池-SN5（Excel 第 34 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_5, .reg_type = 0x04,
     .reg_addr = 41729, .reg_num = 10},
    /* DSP设备SN数据池-SN6（Excel 第 35 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_6, .reg_type = 0x04,
     .reg_addr = 41739, .reg_num = 10},
    /* DSP设备SN数据池-SN7（Excel 第 36 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_7, .reg_type = 0x04,
     .reg_addr = 41749, .reg_num = 10},
    /* DSP设备SN数据池-SN8（Excel 第 37 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_8, .reg_type = 0x04,
     .reg_addr = 41759, .reg_num = 10},
    /* DSP设备SN数据池-SN9（Excel 第 38 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_9, .reg_type = 0x04,
     .reg_addr = 41769, .reg_num = 10},
    /* DSP设备SN数据池-SN10（Excel 第 39 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_10, .reg_type = 0x04,
     .reg_addr = 41779, .reg_num = 10},
    /* DSP设备SN数据池-SN11（Excel 第 40 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_11, .reg_type = 0x04,
     .reg_addr = 41789, .reg_num = 10},
    /* DSP设备SN数据池-SN12（Excel 第 41 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_12, .reg_type = 0x04,
     .reg_addr = 41799, .reg_num = 10},
    /* DSP设备SN数据池-SN13（Excel 第 42 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_13, .reg_type = 0x04,
     .reg_addr = 41809, .reg_num = 10},
    /* DSP设备SN数据池-SN14（Excel 第 43 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_14, .reg_type = 0x04,
     .reg_addr = 41819, .reg_num = 10},
    /* DSP设备SN数据池-SN15（Excel 第 44 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_15, .reg_type = 0x04,
     .reg_addr = 41829, .reg_num = 10},
    /* DSP设备SN数据池-SN16（Excel 第 45 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_DSP_DEV_SN_16, .reg_type = 0x04,
     .reg_addr = 41839, .reg_num = 10},
    /* 设备类型编码（北向机器型号编码）（Excel 第 46 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_1481, .reg_type = 0x03,
     .reg_addr = 2515, .reg_num = 1},
    /* 北向 录波数据总条数30078 3x（Excel 第 47 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_1621, .reg_type = 0x03,
     .reg_addr = 30078, .reg_num = 1},
    /* 北向 录波数据读取进度30079 3x（Excel 第 48 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_1622, .reg_type = 0x03,
     .reg_addr = 30079, .reg_num = 1},
    /* 北向 整机属性协议号2500 3x（Excel 第 49 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2500, .reg_type = 0x03,
     .reg_addr = 2500, .reg_num = 2},
    /* 北向 整机属性协议版本2502 3x（Excel 第 50 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2502, .reg_type = 0x03,
     .reg_addr = 2502, .reg_num = 2},
    /* 北向 协议地址长度2504 3x（Excel 第 51 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2504, .reg_type = 0x03,
     .reg_addr = 2504, .reg_num = 1},
    /* 南向 机器型号30360 4x 北向 机器型号2516 3x（Excel 第 52 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2516, .reg_type = 0x03,
     .reg_addr = 2516, .reg_num = 8},
    /* 北向 故障录波协议号2569 3x（Excel 第 53 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2569, .reg_type = 0x03,
     .reg_addr = 2569, .reg_num = 2},
    /* 北向 故障录波协议版本2571 3x（Excel 第 54 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2571, .reg_type = 0x03,
     .reg_addr = 2571, .reg_num = 2},
    /* 北向 上传固件版本数量2581 3x（Excel 第 55 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2581, .reg_type = 0x03,
     .reg_addr = 2581, .reg_num = 1},
    /* 北向 固件版本号1 2582 3x（Excel 第 56 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_VERSION, .reg_type = 0x03,
     .reg_addr = 2582, .reg_num = 15},
    /* 北向 固件版本号1 2582 3x（Excel 第 57 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_VERSION, .reg_type = 0x03,
     .reg_addr = 31821, .reg_num = 15},
    /* 北向 固件版本号2 2597 3x（Excel 第 58 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2597, .reg_type = 0x03,
     .reg_addr = 2597, .reg_num = 15},
    /* 北向 固件版本号3 2612 3x（Excel 第 59 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2612, .reg_type = 0x03,
     .reg_addr = 2612, .reg_num = 15},
    /* 北向 固件版本号4 2627 3x（Excel 第 60 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2627, .reg_type = 0x03,
     .reg_addr = 2627, .reg_num = 15},
    /* 北向 固件版本号5 2642 3x（Excel 第 61 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2642, .reg_type = 0x03,
     .reg_addr = 2642, .reg_num = 15},
    /* 北向 固件版本号6 2657 3x（Excel 第 62 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2657, .reg_type = 0x03,
     .reg_addr = 2657, .reg_num = 15},
    /* 北向 固件版本号7 2672 3x（Excel 第 63 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2672, .reg_type = 0x03,
     .reg_addr = 2672, .reg_num = 15},
    /* 北向 固件版本号8 2687 3x（Excel 第 64 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2687, .reg_type = 0x03,
     .reg_addr = 2687, .reg_num = 15},
    /* 北向 固件版本号9 2702 3x（Excel 第 65 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2702, .reg_type = 0x03,
     .reg_addr = 2702, .reg_num = 15},
    /* 北向 固件版本号10 2717 3x（Excel 第 66 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2717, .reg_type = 0x03,
     .reg_addr = 2717, .reg_num = 15},
    /* 北向 固件版本号11 2732 3x（Excel 第 67 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2732, .reg_type = 0x03,
     .reg_addr = 2732, .reg_num = 15},
    /* 北向 固件版本号12 2747 3x（Excel 第 68 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_2747, .reg_type = 0x03,
     .reg_addr = 2747, .reg_num = 15},
    /* 北向 SN序列号5378 3x（Excel 第 69 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_5378, .reg_type = 0x03,
     .reg_addr = 2505, .reg_num = 10},
    /* 北向 SN序列号5378 3x（Excel 第 70 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_5378, .reg_type = 0x03,
     .reg_addr = 4990, .reg_num = 10},
    /* 北向 SN序列号5378 3x（Excel 第 71 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_5378, .reg_type = 0x03,
     .reg_addr = 5378, .reg_num = 10},
    /* 北向 功能枚举5487 3x（Excel 第 72 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_5487, .reg_type = 0x03,
     .reg_addr = 5487, .reg_num = 2},
    /* 北向 功能枚举5487 3x（Excel 第 73 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_5487, .reg_type = 0x04,
     .reg_addr = 31997, .reg_num = 2},
    /* 北向 录波数据导出 30034 4x（Excel 第 74 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_30034, .reg_type = 0x04,
     .reg_addr = 30034, .reg_num = 1},
    /* 北向 设置执行故障录播的DSP地址30098 4x（Excel 第 75 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_30098, .reg_type = 0x04,
     .reg_addr = 30098, .reg_num = 1},
    /* 北向 日志数据导出类型 31999 4x（Excel 第 76 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_31999, .reg_type = 0x04,
     .reg_addr = 31999, .reg_num = 1},
    /* 北向 功能选择 32000 4x（Excel 第 77 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32000, .reg_type = 0x04,
     .reg_addr = 32000, .reg_num = 1},
    /* 北向 日志文件索引 32001 4x（Excel 第 78 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32001, .reg_type = 0x04,
     .reg_addr = 32001, .reg_num = 2},
    /* 北向 日志有效位2 32003 4x（Excel 第 79 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32003, .reg_type = 0x04,
     .reg_addr = 32003, .reg_num = 2},
    /* 北向 日志有效位 32005 4x（Excel 第 80 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32005, .reg_type = 0x04,
     .reg_addr = 32005, .reg_num = 2},
    /* 北向 日志上传运行故障码 32007 4x（Excel 第 81 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32007, .reg_type = 0x04,
     .reg_addr = 32007, .reg_num = 2},
    /* 北向 VI扫描故障码 32009 4x（Excel 第 82 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32009, .reg_type = 0x04,
     .reg_addr = 32009, .reg_num = 1},
    /* 北向 设置读取故障录波第n条记录 32019 4x（Excel 第 83 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32019, .reg_type = 0x04,
     .reg_addr = 32019, .reg_num = 1},
    /* 北向 记录类型 32052 4x（Excel 第 84 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32052, .reg_type = 0x04,
     .reg_addr = 32052, .reg_num = 1},
    /* 北向 数据类型 32053 4x（Excel 第 85 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32053, .reg_type = 0x04,
     .reg_addr = 32053, .reg_num = 1},
    /* 北向 可读记录总数 32054 4x（Excel 第 86 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32054, .reg_type = 0x04,
     .reg_addr = 32054, .reg_num = 2},
    /* 北向 当前记录序号 32056 4x（Excel 第 87 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32056, .reg_type = 0x04,
     .reg_addr = 32056, .reg_num = 2},
    /* 北向 记录子序号 32058 4x（Excel 第 88 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32058, .reg_type = 0x04,
     .reg_addr = 32058, .reg_num = 1},
    /* 北向 数据有效长度 4x（Excel 第 89 行） */
    {.dev_id = CFG_DEV_LOCAL, .sig_id = LOCAL_SIG_32061, .reg_type = 0x04,
     .reg_addr = 32061, .reg_num = 1},
};

UINT16 get_g_arm_transmit_table_t_len(void)
{
    UINT16 table_length = 0;
    table_length = ITEM_OF(g_arm_transmit_table_t);
    return table_length;
}

UINT16 get_arm_transmit_tab_len(void)
{
    UINT16 table_length = 0;
    table_length = ITEM_OF(g_arm_transmit_table_t);
    return table_length;
}
