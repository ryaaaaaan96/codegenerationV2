/**********************************************************************
 * @file       signal_id_map.h
 * @brief      自动生成的信号枚举与 signID 映射，请勿手工修改
 * @version    V1.0.0
 * @date       2026/10/14
 * @author     Ryan
 * Copyright   1997-2030 SUNGROW.All Rights Reserved.
 ***********************************************************************/
#ifndef SIGNAL_ID_MAP_H
#define SIGNAL_ID_MAP_H

#include "pub_sig_def.h"

typedef enum {
    /* 设备转发地址（UPM单板测点第 2 行） */
    LOCAL_SIG_TR_ADDR = COMM_SIGID_TR_ADDR,
    /* 平台软件发布版本（UPM单板测点第 3 行） */
    LOCAL_SIG_VER_PUBLISH = COMM_SIGID_VER_PUBLISH,
    /* 平台软件构建版本（UPM单板测点第 4 行） */
    LOCAL_SIG_VER_BUILD = COMM_SIGID_VER_BUILD,
    /* 平台软件补丁版本（UPM单板测点第 5 行） */
    LOCAL_SIG_VER_HOTFIX = COMM_SIGID_VER_HOTFIX,
    /* 平台软件标签版本（UPM单板测点第 6 行） */
    LOCAL_SIG_VER_TAG = COMM_SIGID_VER_TAG,
    /* 设备序列号（UPM单板测点第 7 行） */
    LOCAL_SIG_DEV_SN = COMM_SIGID_DEV_SN,
    /* 串口1工作模式（UPM单板测点第 8 行） */
    LOCAL_SIG_UART_PORT1_WORKMODE = SIGID_UART_PORT1_WORKMODE,
    /* 串口1波特率（UPM单板测点第 9 行） */
    LOCAL_SIG_UART_PORT1_BAUD = SIGID_UART_PORT1_BAUD,
    /* 串口1奇偶校验（UPM单板测点第 10 行） */
    LOCAL_SIG_UART_PORT1_PARITY = SIGID_UART_PORT1_PARITY,
    /* 串口1停止位（UPM单板测点第 11 行） */
    LOCAL_SIG_UART_PORT1_STOP_BITS = SIGID_UART_PORT1_STOP_BITS,
    /* 串口2工作模式（UPM单板测点第 12 行） */
    LOCAL_SIG_UART_PORT2_WORKMODE = SIGID_UART_PORT2_WORKMODE,
    /* 串口2波特率（UPM单板测点第 13 行） */
    LOCAL_SIG_UART_PORT2_BAUD = SIGID_UART_PORT2_BAUD,
    /* 串口2奇偶校验（UPM单板测点第 14 行） */
    LOCAL_SIG_UART_PORT2_PARITY = SIGID_UART_PORT2_PARITY,
    /* 串口2停止位（UPM单板测点第 15 行） */
    LOCAL_SIG_UART_PORT2_STOP_BITS = SIGID_UART_PORT2_STOP_BITS,
    /* 串口3工作模式（UPM单板测点第 16 行） */
    LOCAL_SIG_UART_PORT3_WORKMODE = SIGID_UART_PORT3_WORKMODE,
    /* 串口3波特率（UPM单板测点第 17 行） */
    LOCAL_SIG_UART_PORT3_BAUD = SIGID_UART_PORT3_BAUD,
    /* 串口3奇偶校验（UPM单板测点第 18 行） */
    LOCAL_SIG_UART_PORT3_PARITY = SIGID_UART_PORT3_PARITY,
    /* 串口3停止位（UPM单板测点第 19 行） */
    LOCAL_SIG_UART_PORT3_STOP_BITS = SIGID_UART_PORT3_STOP_BITS,
    /* 串口4工作模式（UPM单板测点第 20 行） */
    LOCAL_SIG_UART_PORT4_WORKMODE = SIGID_UART_PORT4_WORKMODE,
    /* 串口4波特率（UPM单板测点第 21 行） */
    LOCAL_SIG_UART_PORT4_BAUD = SIGID_UART_PORT4_BAUD,
    /* 串口4奇偶校验（UPM单板测点第 22 行） */
    LOCAL_SIG_UART_PORT4_PARITY = SIGID_UART_PORT4_PARITY,
    /* 串口4停止位（UPM单板测点第 23 行） */
    LOCAL_SIG_UART_PORT4_STOP_BITS = SIGID_UART_PORT4_STOP_BITS,
    /* 串口5工作模式（UPM单板测点第 24 行） */
    LOCAL_SIG_UART_PORT5_WORKMODE = SIGID_UART_PORT5_WORKMODE,
    /* 串口5波特率（UPM单板测点第 25 行） */
    LOCAL_SIG_UART_PORT5_BAUD = SIGID_UART_PORT5_BAUD,
    /* 串口5奇偶校验（UPM单板测点第 26 行） */
    LOCAL_SIG_UART_PORT5_PARITY = SIGID_UART_PORT5_PARITY,
    /* 串口5停止位（UPM单板测点第 27 行） */
    LOCAL_SIG_UART_PORT5_STOP_BITS = SIGID_UART_PORT5_STOP_BITS,
    /* 串口6工作模式（UPM单板测点第 28 行） */
    LOCAL_SIG_UART_PORT6_WORKMODE = SIGID_UART_PORT6_WORKMODE,
    /* 串口6波特率（UPM单板测点第 29 行） */
    LOCAL_SIG_UART_PORT6_BAUD = SIGID_UART_PORT6_BAUD,
    /* 串口6奇偶校验（UPM单板测点第 30 行） */
    LOCAL_SIG_UART_PORT6_PARITY = SIGID_UART_PORT6_PARITY,
    /* 串口6停止位（UPM单板测点第 31 行） */
    LOCAL_SIG_UART_PORT6_STOP_BITS = SIGID_UART_PORT6_STOP_BITS,
    /* 串口7工作模式（UPM单板测点第 32 行） */
    LOCAL_SIG_UART_PORT7_WORKMODE = SIGID_UART_PORT7_WORKMODE,
    /* 串口7波特率（UPM单板测点第 33 行） */
    LOCAL_SIG_UART_PORT7_BAUD = SIGID_UART_PORT7_BAUD,
    /* 串口7奇偶校验（UPM单板测点第 34 行） */
    LOCAL_SIG_UART_PORT7_PARITY = SIGID_UART_PORT7_PARITY,
    /* 串口7停止位（UPM单板测点第 35 行） */
    LOCAL_SIG_UART_PORT7_STOP_BITS = SIGID_UART_PORT7_STOP_BITS,
    /* CAN口1工作模式（UPM单板测点第 36 行） */
    LOCAL_SIG_CAN_PORT1_WORKMODE = SIGID_CAN_PORT1_WORKMODE,
    /* CAN口2工作模式（UPM单板测点第 37 行） */
    LOCAL_SIG_CAN_PORT2_WORKMODE = SIGID_CAN_PORT2_WORKMODE,
    /* 通讯检测状态,默认值0XAA（UPM单板测点第 38 行） */
    LOCAL_SIG_MB_COM_STATUS = SIGID_MB_COM_STATUS,
    /* 通讯中断配置（UPM单板测点第 39 行） */
    LOCAL_SIG_MB_COM_ERR_CONFIG = SIGID_MB_COM_ERR_CONFIG,
    /* 通讯中断时间（UPM单板测点第 40 行） */
    LOCAL_SIG_MB_COM_ERR_TIME = SIGID_MB_COM_ERR_TIME,
    /* 通讯恢复配置（UPM单板测点第 41 行） */
    LOCAL_SIG_MB_COM_REC_CONFIG = SIGID_MB_COM_REC_CONFIG,
    /* 通讯恢复时间（UPM单板测点第 42 行） */
    LOCAL_SIG_MB_COM_REC_TIME = SIGID_MB_COM_REC_TIME,
    /* 串口1连续错误包计数（UPM单板测点第 43 行） */
    LOCAL_SIG_MB_UART1_ERR_TIMES = SIGID_MB_UART1_ERR_TIMES,
    /* 串口1正常收包计数（UPM单板测点第 44 行） */
    LOCAL_SIG_MB_UART1_PKT_TIMES = SIGID_MB_UART1_PKT_TIMES,
    /* 串口2连续错误包计数（UPM单板测点第 45 行） */
    LOCAL_SIG_MB_UART2_ERR_TIMES = SIGID_MB_UART2_ERR_TIMES,
    /* 串口2正常收包计数（UPM单板测点第 46 行） */
    LOCAL_SIG_MB_UART2_PKT_TIMES = SIGID_MB_UART2_PKT_TIMES,
    /* 串口3连续错误包计数（UPM单板测点第 47 行） */
    LOCAL_SIG_MB_UART3_ERR_TIMES = SIGID_MB_UART3_ERR_TIMES,
    /* 串口3正常收包计数（UPM单板测点第 48 行） */
    LOCAL_SIG_MB_UART3_PKT_TIMES = SIGID_MB_UART3_PKT_TIMES,
    /* 串口4连续错误包计数（UPM单板测点第 49 行） */
    LOCAL_SIG_MB_UART4_ERR_TIMES = SIGID_MB_UART4_ERR_TIMES,
    /* 串口4正常收包计数（UPM单板测点第 50 行） */
    LOCAL_SIG_MB_UART4_PKT_TIMES = SIGID_MB_UART4_PKT_TIMES,
    /* 串口5连续错误包计数（UPM单板测点第 51 行） */
    LOCAL_SIG_MB_UART5_ERR_TIMES = SIGID_MB_UART5_ERR_TIMES,
    /* 串口5正常收包计数（UPM单板测点第 52 行） */
    LOCAL_SIG_MB_UART5_PKT_TIMES = SIGID_MB_UART5_PKT_TIMES,
    /* 串口6连续错误包计数（UPM单板测点第 53 行） */
    LOCAL_SIG_MB_UART6_ERR_TIMES = SIGID_MB_UART6_ERR_TIMES,
    /* 串口6正常收包计数（UPM单板测点第 54 行） */
    LOCAL_SIG_MB_UART6_PKT_TIMES = SIGID_MB_UART6_PKT_TIMES,
    /* 串口7连续错误包计数（UPM单板测点第 55 行） */
    LOCAL_SIG_MB_UART7_ERR_TIMES = SIGID_MB_UART7_ERR_TIMES,
    /* 串口7正常收包计数（UPM单板测点第 56 行） */
    LOCAL_SIG_MB_UART7_PKT_TIMES = SIGID_MB_UART7_PKT_TIMES,
    /* AES KEY 值（UPM单板测点第 57 行） */
    LOCAL_SIG_TR_AES_KEY_VAL = SIGID_TR_AES_KEY_VAL,
    /* 报文重定向源端口（UPM单板测点第 58 行） */
    LOCAL_SIG_REDIRECT_SRC_PORT = SIGID_REDIRECT_SRC_PORT,
    /* 报文重定向目的端口（UPM单板测点第 59 行） */
    LOCAL_SIG_REDIRECT_DST_PORT = SIGID_REDIRECT_DST_PORT,
    /* 报文重定向时间（小时）（UPM单板测点第 60 行） */
    LOCAL_SIG_REDIRECT_TIME = SIGID_REDIRECT_TIME,
    /* 串口1帧间隔（ms（UPM单板测点第 61 行） */
    LOCAL_SIG_UART_PORT1_IFS = SIGID_UART_PORT1_IFS,
    /* 串口2帧间隔（ms）（UPM单板测点第 62 行） */
    LOCAL_SIG_UART_PORT2_IFS = SIGID_UART_PORT2_IFS,
    /* 串口3帧间隔（ms）（UPM单板测点第 63 行） */
    LOCAL_SIG_UART_PORT3_IFS = SIGID_UART_PORT3_IFS,
    /* 串口4帧间隔（ms）（UPM单板测点第 64 行） */
    LOCAL_SIG_UART_PORT4_IFS = SIGID_UART_PORT4_IFS,
    /* 串口5帧间隔（ms）（UPM单板测点第 65 行） */
    LOCAL_SIG_UART_PORT5_IFS = SIGID_UART_PORT5_IFS,
    /* 串口6帧间隔（ms）（UPM单板测点第 66 行） */
    LOCAL_SIG_UART_PORT6_IFS = SIGID_UART_PORT6_IFS,
    /* 串口7帧间隔（ms）（UPM单板测点第 67 行） */
    LOCAL_SIG_UART_PORT7_IFS = SIGID_UART_PORT7_IFS,
    /* CAN口1通道1范围（UPM单板测点第 68 行） */
    LOCAL_SIG_CAN_PORT1_CHANNEL1_RANGE = SIGID_CAN_PORT1_CHANNEL1_RANGE,
    /* CAN口1通道2范围（UPM单板测点第 69 行） */
    LOCAL_SIG_CAN_PORT1_CHANNEL2_RANGE = SIGID_CAN_PORT1_CHANNEL2_RANGE,
    /* CAN口1通道3范围（UPM单板测点第 70 行） */
    LOCAL_SIG_CAN_PORT1_CHANNEL3_RANGE = SIGID_CAN_PORT1_CHANNEL3_RANGE,
    /* CAN口2通道1范围（UPM单板测点第 71 行） */
    LOCAL_SIG_CAN_PORT2_CHANNEL1_RANGE = SIGID_CAN_PORT2_CHANNEL1_RANGE,
    /* CAN口2通道2范围（UPM单板测点第 72 行） */
    LOCAL_SIG_CAN_PORT2_CHANNEL2_RANGE = SIGID_CAN_PORT2_CHANNEL2_RANGE,
    /* CAN口2通道3范围（UPM单板测点第 73 行） */
    LOCAL_SIG_CAN_PORT2_CHANNEL3_RANGE = SIGID_CAN_PORT2_CHANNEL3_RANGE,
    /* modbustcp server使能1（UPM单板测点第 74 行） */
    LOCAL_SIG_CMM_MBTCP_SERVER_FLAG1 = SIGID_CMM_MBTCP_SERVER_FLAG1,
    /* modbustcp server监听端口1（UPM单板测点第 75 行） */
    LOCAL_SIG_CMM_MBTCP_SERVER_PORT1 = SIGID_CMM_MBTCP_SERVER_PORT1,
    /* 以太网DHCP使能开关（UPM单板测点第 76 行） */
    LOCAL_SIG_ETH_DHCP_ENABLE = SIGID_ETH_DHCP_ENABLE,
    /* 以太网IP（UPM单板测点第 77 行） */
    LOCAL_SIG_ETH_IP = SIGID_ETH_IP,
    /* 以太网子网掩码（UPM单板测点第 78 行） */
    LOCAL_SIG_ETH_MASK = SIGID_ETH_MASK,
    /* 以太网网关（UPM单板测点第 79 行） */
    LOCAL_SIG_ETH_GATEWAY = SIGID_ETH_GATEWAY,
    /* 以太网DNS1（UPM单板测点第 80 行） */
    LOCAL_SIG_ETH_DNS1 = SIGID_ETH_DNS1,
    /* 以太网DNS2（UPM单板测点第 81 行） */
    LOCAL_SIG_ETH_DNS2 = SIGID_ETH_DNS2,
    /* dsp的数量规格,修改该测点需要保证所有设备已经关机（UPM单板测点第 82 行） */
    LOCAL_SIG_DSP_DEV_NUM = SIGID_DSP_DEV_NUM,
    /* 查询DSP在线状态（UPM单板测点第 83 行） */
    LOCAL_SIG_DSP_ON_LINE_NUM = SIGID_DSP_ON_LINE_NUM,
    /* NTP服务器（UPM单板测点第 86 行） */
    LOCAL_SIG_NTP_SERVER = SIGID_NTP_SERVER,
    /* NTP对时时间间隔 单位:秒（UPM单板测点第 87 行） */
    LOCAL_SIG_NTP_TIME_INTERVAL = SIGID_NTP_TIME_INTERVAL,
    /* NTP对时成功时间（UPM单板测点第 88 行） */
    LOCAL_SIG_NTP_SYNC_TIME = SIGID_NTP_SYNC_TIME,
    /* 单包广播报文连续发送的次数（UPM单板测点第 89 行） */
    LOCAL_SIG_DEV_BRD_SEND_CNT = SIGID_DEV_BRD_SEND_CNT,
    /* 未绑定的DSP数量（UPM单板测点第 90 行） */
    LOCAL_SIG_NOT_BOUND_DSP_NUM = 329,
    /* AES iv 值（UPM单板测点第 91 行） */
    LOCAL_SIG_275 = 275,
    /* 转发接收到增量报文标记（UPM单板测点第 92 行） */
    LOCAL_SIG_327 = 327,
    /* 设备类型改变（UPM单板测点第 93 行） */
    LOCAL_SIG_1062 = 1062,
    /* 设备类型编码（北向机器型号编码）（UPM单板测点第 94 行） */
    LOCAL_SIG_1481 = 1481,
    /* 北向 设置执行故障录播的DSP地址16027 3x（UPM单板测点第 95 行） */
    LOCAL_SIG_16027 = 16027,
    /* 北向 录波数据总条数30078 3x（UPM单板测点第 96 行） */
    LOCAL_SIG_1621 = 1621,
    /* 北向 录波数据读取进度30079 3x（UPM单板测点第 97 行） */
    LOCAL_SIG_1622 = 1622,
    /* 北向 整机属性协议号2500 3x（UPM单板测点第 98 行） */
    LOCAL_SIG_2500 = 2500,
    /* 北向 整机属性协议版本2502 3x（UPM单板测点第 99 行） */
    LOCAL_SIG_2502 = 2502,
    /* 北向 协议地址长度2504 3x（UPM单板测点第 100 行） */
    LOCAL_SIG_2504 = 2504,
    /* 南向 机器型号30360 4x 北向 机器型号2516 3x（UPM单板测点第 101 行） */
    LOCAL_SIG_2516 = 2516,
    /* 北向 故障录波协议号2569 3x（UPM单板测点第 102 行） */
    LOCAL_SIG_2569 = 2569,
    /* 北向 故障录波协议版本2571 3x（UPM单板测点第 103 行） */
    LOCAL_SIG_2571 = 2571,
    /* 北向 上传固件版本数量2581 3x（UPM单板测点第 104 行） */
    LOCAL_SIG_2581 = 2581,
    /* 北向 固件版本号1 2582 3x（UPM单板测点第 105 行） */
    LOCAL_SIG_VERSION = 2582,
    /* 北向 固件版本号2 2597 3x（UPM单板测点第 107 行） */
    LOCAL_SIG_2597 = 2597,
    /* 北向 固件版本号3 2612 3x（UPM单板测点第 108 行） */
    LOCAL_SIG_2612 = 2612,
    /* 北向 固件版本号4 2627 3x（UPM单板测点第 109 行） */
    LOCAL_SIG_2627 = 2627,
    /* 北向 固件版本号5 2642 3x（UPM单板测点第 110 行） */
    LOCAL_SIG_2642 = 2642,
    /* 北向 固件版本号6 2657 3x（UPM单板测点第 111 行） */
    LOCAL_SIG_2657 = 2657,
    /* 北向 固件版本号7 2672 3x（UPM单板测点第 112 行） */
    LOCAL_SIG_2672 = 2672,
    /* 北向 固件版本号8 2687 3x（UPM单板测点第 113 行） */
    LOCAL_SIG_2687 = 2687,
    /* 北向 固件版本号9 2702 3x（UPM单板测点第 114 行） */
    LOCAL_SIG_2702 = 2702,
    /* 北向 固件版本号10 2717 3x（UPM单板测点第 115 行） */
    LOCAL_SIG_2717 = 2717,
    /* 北向 固件版本号11 2732 3x（UPM单板测点第 116 行） */
    LOCAL_SIG_2732 = 2732,
    /* 北向 固件版本号12 2747 3x（UPM单板测点第 117 行） */
    LOCAL_SIG_2747 = 2747,
    /* 北向 属性协议更新流水号5220 3x（UPM单板测点第 118 行） */
    LOCAL_SIG_5220 = 5220,
    /* 北向 SN序列号5378 3x（UPM单板测点第 119 行） */
    LOCAL_SIG_5378 = 5378,
    /* 北向 功能枚举5487 3x（UPM单板测点第 122 行） */
    LOCAL_SIG_5487 = 5487,
    /* 北向 录波数据导出 30034 4x（UPM单板测点第 124 行） */
    LOCAL_SIG_30034 = 30034,
    /* 北向 设置执行故障录播的DSP地址30098 4x（UPM单板测点第 125 行） */
    LOCAL_SIG_30098 = 30098,
    /* 北向 日志数据导出类型 31999 4x（UPM单板测点第 126 行） */
    LOCAL_SIG_31999 = 31999,
    /* 北向 功能选择 32000 4x（UPM单板测点第 127 行） */
    LOCAL_SIG_32000 = 32000,
    /* 北向 日志文件索引 32001 4x（UPM单板测点第 128 行） */
    LOCAL_SIG_32001 = 32001,
    /* 北向 日志有效位2 32003 4x（UPM单板测点第 129 行） */
    LOCAL_SIG_32003 = 32003,
    /* 北向 日志有效位 32005 4x（UPM单板测点第 130 行） */
    LOCAL_SIG_32005 = 32005,
    /* 北向 日志上传运行故障码 32007 4x（UPM单板测点第 131 行） */
    LOCAL_SIG_32007 = 32007,
    /* 北向 VI扫描故障码 32009 4x（UPM单板测点第 132 行） */
    LOCAL_SIG_32009 = 32009,
    /* 北向 设置读取故障录波第n条记录 32019 4x（UPM单板测点第 133 行） */
    LOCAL_SIG_32019 = 32019,
    /* 北向 记录类型 32052 4x（UPM单板测点第 134 行） */
    LOCAL_SIG_32052 = 32052,
    /* 北向 数据类型 32053 4x（UPM单板测点第 135 行） */
    LOCAL_SIG_32053 = 32053,
    /* 北向 可读记录总数 32054 4x（UPM单板测点第 136 行） */
    LOCAL_SIG_32054 = 32054,
    /* 北向 当前记录序号 32056 4x（UPM单板测点第 137 行） */
    LOCAL_SIG_32056 = 32056,
    /* 北向 记录子序号 32058 4x（UPM单板测点第 138 行） */
    LOCAL_SIG_32058 = 32058,
    /* 北向 数据有效长度 4x（UPM单板测点第 139 行） */
    LOCAL_SIG_32061 = 32061,
    /* 模块负载电压（UPM单板测点第 140 行） */
    UPM_SIG_LOAD_VOL = 1001,
    /* 模块负载电流（UPM单板测点第 141 行） */
    UPM_SIG_LOAD_CUR = 1002,
    /* 电池电压（UPM单板测点第 142 行） */
    UPM_SIG_BAT_VOL = 1003,
    /* 电池电流（UPM单板测点第 143 行） */
    UPM_SIG_BAT_CUR = 1004,
    /* 模块交流线电压Uab（UPM单板测点第 144 行） */
    UPM_SIG_UAB_VOL = 1005,
    /* 模块交流线电压Ubc（UPM单板测点第 145 行） */
    UPM_SIG_UBC_VOL = 1006,
    /* 模块交流线电压Uca（UPM单板测点第 146 行） */
    UPM_SIG_UCA_VOL = 1007,
    /* 交流频率（UPM单板测点第 147 行） */
    UPM_SIG_AC_FREQ = 1008,
    /* 模块温度（UPM单板测点第 148 行） */
    UPM_SIG_TEMP = 1009,
    /* 子板供电方式（UPM单板测点第 149 行） */
    UPM_SIG_POWER_MODE_STATE = 1010,
    /* 子板开关机状态（UPM单板测点第 150 行） */
    UPM_SIG_POWER_OFF_STATE = 1011,
    /* 子板休眠状态（UPM单板测点第 151 行） */
    UPM_SIG_SLEEP_STATE = 1012,
    /* 模块故障1模块故障1（UPM单板测点第 152 行） */
    UPM_SIG_FAULT_STATE1 = 1013,
    /* 模块交流故障（UPM单板测点第 153 行） */
    UPM_SIG_AC_FAULT_STATE = 1014,
    /* 子板故障状态（UPM单板测点第 154 行） */
    UPM_SIG_SUB_BOARD_FAULT_STATE = 1015,
    /* 子板告警状态（UPM单板测点第 155 行） */
    UPM_SIG_SUB_BOARD_WARN_STATE = 1016,
    /* 负载输出电压设置（UPM单板测点第 156 行） */
    UPM_SIG_LOAD_VOL_SET = 1017,
    /* 负载输出限流值（UPM单板测点第 157 行） */
    UPM_SIG_LOAD_CUR_SET = 1018,
    /* 负载输出电压缺省值（UPM单板测点第 158 行） */
    UPM_SIG_LOAD_DEFAULT_VOL = 1019,
    /* 电池电压设置（UPM单板测点第 159 行） */
    UPM_SIG_BAT_VOL_SET = 1020,
    /* 电池限流设置（UPM单板测点第 160 行） */
    UPM_SIG_BAT_CUR_SET = 1021,
    /* 电池输出点电压缺省值（UPM单板测点第 161 行） */
    UPM_SIG_BAT_DEFAULT_VOL = 1022,
    /* 模块交流过压值（UPM单板测点第 162 行） */
    UPM_SIG_AC_OVER_VOL = 1023,
    /* 模块交流欠压值（UPM单板测点第 163 行） */
    UPM_SIG_AC_UNDER_VOL = 1024,
    /* 模块交流失压值（UPM单板测点第 164 行） */
    UPM_SIG_AC_NONE_VOL = 1025,
    /* 模块交流频率高门限值（UPM单板测点第 165 行） */
    UPM_SIG_AC_OVER_FREQ = 1026,
    /* 模块交流频率低门限值（UPM单板测点第 166 行） */
    UPM_SIG_AC_UNDER_FREQ = 1027,
    /* 开关机动作（UPM单板测点第 167 行） */
    UPM_SIG_POWER_OFF_CTRL = 1028,
    /* 休眠动作（UPM单板测点第 168 行） */
    UPM_SIG_SLEEP_CTRL = 1029,
    /* 子板供电动作（UPM单板测点第 169 行） */
    UPM_SIG_POWER_MODE_CTRL = 1030,
} LOCAL_SIGNAL_ID_E;

typedef enum {
    /* 固件版本号版本（UPM-DSP采集数据第 2 行） */
    PARAM_PRODUCT_TYPE = 2582,
    /* 机器型号（UPM-DSP采集数据第 3 行） */
    PARAM_PRODUCT_CODE = 2516,
    /* 机器版本号（UPM-DSP采集数据第 4 行） */
    PARAM_CLIENT_CODE = 2524,
    /* 机器型号编码（UPM-DSP采集数据第 5 行） */
    PARAM_TYPE = 2515,
    /* 设备类型编码（UPM-DSP采集数据第 6 行） */
    PARAM_MATRIL_CODE = 1481,
    /* 序列号（UPM-DSP采集数据第 7 行） */
    PARAM_VEHICLE_TYPE = 14,
    /* DCDC任务级故障字1（UPM-DSP采集数据第 8 行） */
    DCDC_TSK_FW_FLT_FLG1 = 1007,
    /* DCDC任务级故障字2（UPM-DSP采集数据第 9 行） */
    DCDC_TSK_FW_FLT_FLG2 = 1008,
    /* DCDC任务级故障字3（UPM-DSP采集数据第 10 行） */
    DCDC_TSK_FW_FLT_FLG3 = 1009,
    /* DCDC任务级故障字4（UPM-DSP采集数据第 11 行） */
    DCDC_TSK_FW_FLT_FLG4 = 1010,
    /* DCDC任务级告警字1（UPM-DSP采集数据第 12 行） */
    DCDC_TSK_WARN_FLT_FLG1 = 1011,
    /* DCDC任务级告警字2（UPM-DSP采集数据第 13 行） */
    DCDC_TSK_WARN_FLT_FLG2 = 1012,
    /* DCDC任务级告警字3（UPM-DSP采集数据第 14 行） */
    DCDC_TSK_WARN_FLT_FLG3 = 1013,
    /* 主状态机工作模式（UPM-DSP采集数据第 15 行） */
    MAIN_WRK_MODE = 1014,
    /* 风扇1转速（UPM-DSP采集数据第 54 行） */
    U16_FAN_SPEED1 = 1039,
    /* 风扇2转速（UPM-DSP采集数据第 55 行） */
    U16_FAN_SPEED2 = 1040,
    /* 风扇3转速（UPM-DSP采集数据第 56 行） */
    U16_FAN_SPEED3 = 1041,
    /* 整流Rect1电压（UPM-DSP采集数据第 57 行） */
    F32_RECT1_VOL = 1021,
    /* 电网L-R to L-S线电压线电压（UPM-DSP采集数据第 58 行） */
    F32_LINE_VOL_RTO_S = 1022,
    /* 电网L-S to L-T线电压线电压（UPM-DSP采集数据第 59 行） */
    F32_LINE_VOL_STO_T = 1023,
    /* 电网R相电压（UPM-DSP采集数据第 60 行） */
    F32_PHASE_VOL_R = 1024,
    /* 电网S相电压（UPM-DSP采集数据第 61 行） */
    F32_PHASE_VOL_S = 1025,
    /* 电网T相电压（UPM-DSP采集数据第 62 行） */
    F32_PHASE_VOL_T = 1026,
    /* Boost输出母线电压（UPM-DSP采集数据第 63 行） */
    F32_BOOST_BUS_VOL = 1027,
    /* Buck输出电压（UPM-DSP采集数据第 64 行） */
    F32_OUTPUT_VOL = 1028,
    /* 电池电压（UPM-DSP采集数据第 65 行） */
    F32_BAT_VOL = 1029,
    /* Buck输出电流（UPM-DSP采集数据第 66 行） */
    F32_OUTPUT_CURR = 1030,
    /* 中断故障字1（UPM-DSP采集数据第 67 行） */
    U16_INT_FAULT_WORD1 = 1031,
    /* 中断故障字2（UPM-DSP采集数据第 68 行） */
    U16_INT_FAULT_WORD2 = 1032,
    /* 中断告警字1（UPM-DSP采集数据第 69 行） */
    U16_INT_WARN_WORD1 = 1033,
    /* 中断告警字2（UPM-DSP采集数据第 70 行） */
    U16_INT_WARN_WORD2 = 1034,
    /* Boost状态机工作状态（UPM-DSP采集数据第 71 行） */
    U16_BOOST_WRK_MODE = 1042,
    /* 主控板单Cell工作指令（UPM-DSP采集数据第 154 行） */
    ARM_COM_CELL_WORK_CMD = 1015,
    /* 主控板Buck工作电压指令（UPM-DSP采集数据第 155 行） */
    ARM_COMT_BUCK_VOL_CMD = 1016,
    /* 主控板Boost工作电压指令（UPM-DSP采集数据第 156 行） */
    ARM_COM_BOOST_VOL_CMD = 1017,
    /* 主控板限流值（UPM-DSP采集数据第 157 行） */
    ARM_COM_CURR_LMT = 1018,
    /* 主控板平均电流（UPM-DSP采集数据第 158 行） */
    ARM_AVERAGE_CURR = 1019,
    /* 主控板平均电压（UPM-DSP采集数据第 159 行） */
    ARM_AVERAGE_VOL = 1043,
    /* 主控板强制电池工作使能（UPM-DSP采集数据第 160 行） */
    ARM_COM_FORCE_BAT_WRK_EN = 1020,
    /* AC切电池欠压阈值（UPM-DSP采集数据第 190 行） */
    AC2_BAT_LOW_THRESH = 1035,
    /* AC切电池过压阈值（UPM-DSP采集数据第 191 行） */
    AC2_BAT_HIGH_THRESH = 1036,
    /* 电网频率（UPM-DSP采集数据第 192 行） */
    GRID_FREQUENCY = 1038,
    /* 海拔默认值（UPM-DSP采集数据第 193 行） */
    ALTITUDE_DEFAULT = 1037,
} DSP_SIGNAL_ID_E;

#endif /* SIGNAL_ID_MAP_H */
