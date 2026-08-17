/**********************************************************************
 * @file       process.c
 * @brief      自动生成的信号处理表，请勿手工修改
 * @version    V1.0.0
 * @date       2026/8/17
 * @author     Ryan
 * Copyright   1997-2030 SUNGROW.All Rights Reserved.
 ***********************************************************************/
#include "globalfunction.h"
#include "pub_sig_def.h"
#include "redirect_lib.h"
#include "dsp_init.h"
#include "signal_id_map.h"

const DM_SIG_CFG_S g_arm_data_table[] = {
    /* 设备转发地址  LOCAL_SIG_TR_ADDR（Excel 第 2 行） */
    {.sig_id = LOCAL_SIG_TR_ADDR, .sig_size = 2, .sig_flag = (5),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 平台软件发布版本  LOCAL_SIG_VER_PUBLISH（Excel 第 3 行） */
    {.sig_id = LOCAL_SIG_VER_PUBLISH, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 平台软件构建版本  LOCAL_SIG_VER_BUILD（Excel 第 4 行） */
    {.sig_id = LOCAL_SIG_VER_BUILD, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 平台软件补丁版本  LOCAL_SIG_VER_HOTFIX（Excel 第 5 行） */
    {.sig_id = LOCAL_SIG_VER_HOTFIX, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 平台软件标签版本  LOCAL_SIG_VER_TAG（Excel 第 6 行） */
    {.sig_id = LOCAL_SIG_VER_TAG, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 设备序列号  LOCAL_SIG_DEV_SN（Excel 第 7 行） */
    {.sig_id = LOCAL_SIG_DEV_SN, .sig_size = 20, .sig_flag = (17),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = link_inner_sn_value},
    /* 串口1工作模式  LOCAL_SIG_UART_PORT1_WORKMODE（Excel 第 8 行） */
    {.sig_id = LOCAL_SIG_UART_PORT1_WORKMODE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口1波特率  LOCAL_SIG_UART_PORT1_BAUD（Excel 第 9 行） */
    {.sig_id = LOCAL_SIG_UART_PORT1_BAUD, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口1奇偶校验  LOCAL_SIG_UART_PORT1_PARITY（Excel 第 10 行） */
    {.sig_id = LOCAL_SIG_UART_PORT1_PARITY, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口1停止位  LOCAL_SIG_UART_PORT1_STOP_BITS（Excel 第 11 行） */
    {.sig_id = LOCAL_SIG_UART_PORT1_STOP_BITS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口作模式  LOCAL_SIG_UART_PORT2_WORKMODE（Excel 第 12 行） */
    {.sig_id = LOCAL_SIG_UART_PORT2_WORKMODE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口2波特率  LOCAL_SIG_UART_PORT2_BAUD（Excel 第 13 行） */
    {.sig_id = LOCAL_SIG_UART_PORT2_BAUD, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口2奇偶校验  LOCAL_SIG_UART_PORT2_PARITY（Excel 第 14 行） */
    {.sig_id = LOCAL_SIG_UART_PORT2_PARITY, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口2停止位  LOCAL_SIG_UART_PORT2_STOP_BITS（Excel 第 15 行） */
    {.sig_id = LOCAL_SIG_UART_PORT2_STOP_BITS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口3工作模式  LOCAL_SIG_UART_PORT3_WORKMODE（Excel 第 16 行） */
    {.sig_id = LOCAL_SIG_UART_PORT3_WORKMODE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口3波特率  LOCAL_SIG_UART_PORT3_BAUD（Excel 第 17 行） */
    {.sig_id = LOCAL_SIG_UART_PORT3_BAUD, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口3奇偶校验  LOCAL_SIG_UART_PORT3_PARITY（Excel 第 18 行） */
    {.sig_id = LOCAL_SIG_UART_PORT3_PARITY, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口3停止位  LOCAL_SIG_UART_PORT3_STOP_BITS（Excel 第 19 行） */
    {.sig_id = LOCAL_SIG_UART_PORT3_STOP_BITS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口4工作模式  LOCAL_SIG_UART_PORT4_WORKMODE（Excel 第 20 行） */
    {.sig_id = LOCAL_SIG_UART_PORT4_WORKMODE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口4波特率  LOCAL_SIG_UART_PORT4_BAUD（Excel 第 21 行） */
    {.sig_id = LOCAL_SIG_UART_PORT4_BAUD, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口4奇偶校验  LOCAL_SIG_UART_PORT4_PARITY（Excel 第 22 行） */
    {.sig_id = LOCAL_SIG_UART_PORT4_PARITY, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口4停止位  LOCAL_SIG_UART_PORT4_STOP_BITS（Excel 第 23 行） */
    {.sig_id = LOCAL_SIG_UART_PORT4_STOP_BITS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口5工作模式  LOCAL_SIG_UART_PORT5_WORKMODE（Excel 第 24 行） */
    {.sig_id = LOCAL_SIG_UART_PORT5_WORKMODE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口5波特率  LOCAL_SIG_UART_PORT5_BAUD（Excel 第 25 行） */
    {.sig_id = LOCAL_SIG_UART_PORT5_BAUD, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口5奇偶校验  LOCAL_SIG_UART_PORT5_PARITY（Excel 第 26 行） */
    {.sig_id = LOCAL_SIG_UART_PORT5_PARITY, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口5停止位  LOCAL_SIG_UART_PORT5_STOP_BITS（Excel 第 27 行） */
    {.sig_id = LOCAL_SIG_UART_PORT5_STOP_BITS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口6工作模式  LOCAL_SIG_UART_PORT6_WORKMODE（Excel 第 28 行） */
    {.sig_id = LOCAL_SIG_UART_PORT6_WORKMODE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口6波特率  LOCAL_SIG_UART_PORT6_BAUD（Excel 第 29 行） */
    {.sig_id = LOCAL_SIG_UART_PORT6_BAUD, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口6奇偶校验  LOCAL_SIG_UART_PORT6_PARITY（Excel 第 30 行） */
    {.sig_id = LOCAL_SIG_UART_PORT6_PARITY, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口6停止位  LOCAL_SIG_UART_PORT6_STOP_BITS（Excel 第 31 行） */
    {.sig_id = LOCAL_SIG_UART_PORT6_STOP_BITS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口7工作模式  LOCAL_SIG_UART_PORT7_WORKMODE（Excel 第 32 行） */
    {.sig_id = LOCAL_SIG_UART_PORT7_WORKMODE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口7波特率  LOCAL_SIG_UART_PORT7_BAUD（Excel 第 33 行） */
    {.sig_id = LOCAL_SIG_UART_PORT7_BAUD, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口7奇偶校验  LOCAL_SIG_UART_PORT7_PARITY（Excel 第 34 行） */
    {.sig_id = LOCAL_SIG_UART_PORT7_PARITY, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口7停止位  LOCAL_SIG_UART_PORT7_STOP_BITS（Excel 第 35 行） */
    {.sig_id = LOCAL_SIG_UART_PORT7_STOP_BITS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* CAN口1工作模式  LOCAL_SIG_CAN_PORT1_WORKMODE（Excel 第 36 行） */
    {.sig_id = LOCAL_SIG_CAN_PORT1_WORKMODE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* CAN口2工作模式  LOCAL_SIG_CAN_PORT2_WORKMODE（Excel 第 37 行） */
    {.sig_id = LOCAL_SIG_CAN_PORT2_WORKMODE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 通讯检测状态,默认值0XAA  LOCAL_SIG_MB_COM_STATUS（Excel 第 38 行） */
    {.sig_id = LOCAL_SIG_MB_COM_STATUS, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 通讯中断配置  LOCAL_SIG_MB_COM_ERR_CONFIG（Excel 第 39 行） */
    {.sig_id = LOCAL_SIG_MB_COM_ERR_CONFIG, .sig_size = 2, .sig_flag = (5),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 通讯中断时间  LOCAL_SIG_MB_COM_ERR_TIME（Excel 第 40 行） */
    {.sig_id = LOCAL_SIG_MB_COM_ERR_TIME, .sig_size = 2, .sig_flag = (5),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 通讯恢复配置  LOCAL_SIG_MB_COM_REC_CONFIG（Excel 第 41 行） */
    {.sig_id = LOCAL_SIG_MB_COM_REC_CONFIG, .sig_size = 2, .sig_flag = (5),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 通讯恢复时间  LOCAL_SIG_MB_COM_REC_TIME（Excel 第 42 行） */
    {.sig_id = LOCAL_SIG_MB_COM_REC_TIME, .sig_size = 2, .sig_flag = (5),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口1连续错误包计数  LOCAL_SIG_MB_UART1_ERR_TIMES（Excel 第 43 行） */
    {.sig_id = LOCAL_SIG_MB_UART1_ERR_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口1正常收包计数  LOCAL_SIG_MB_UART1_PKT_TIMES（Excel 第 44 行） */
    {.sig_id = LOCAL_SIG_MB_UART1_PKT_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口2连续错误包计数  LOCAL_SIG_MB_UART2_ERR_TIMES（Excel 第 45 行） */
    {.sig_id = LOCAL_SIG_MB_UART2_ERR_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口2正常收包计数  LOCAL_SIG_MB_UART2_PKT_TIMES（Excel 第 46 行） */
    {.sig_id = LOCAL_SIG_MB_UART2_PKT_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口3连续错误包计数  LOCAL_SIG_MB_UART3_ERR_TIMES（Excel 第 47 行） */
    {.sig_id = LOCAL_SIG_MB_UART3_ERR_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口3正常收包计数  LOCAL_SIG_MB_UART3_PKT_TIMES（Excel 第 48 行） */
    {.sig_id = LOCAL_SIG_MB_UART3_PKT_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口4连续错误包计数  LOCAL_SIG_MB_UART4_ERR_TIMES（Excel 第 49 行） */
    {.sig_id = LOCAL_SIG_MB_UART4_ERR_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口4正常收包计数  LOCAL_SIG_MB_UART4_PKT_TIMES（Excel 第 50 行） */
    {.sig_id = LOCAL_SIG_MB_UART4_PKT_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口5连续错误包计数  LOCAL_SIG_MB_UART5_ERR_TIMES（Excel 第 51 行） */
    {.sig_id = LOCAL_SIG_MB_UART5_ERR_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口5正常收包计数  LOCAL_SIG_MB_UART5_PKT_TIMES（Excel 第 52 行） */
    {.sig_id = LOCAL_SIG_MB_UART5_PKT_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口6连续错误包计数  LOCAL_SIG_MB_UART6_ERR_TIMES（Excel 第 53 行） */
    {.sig_id = LOCAL_SIG_MB_UART6_ERR_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口6正常收包计数  LOCAL_SIG_MB_UART6_PKT_TIMES（Excel 第 54 行） */
    {.sig_id = LOCAL_SIG_MB_UART6_PKT_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口7连续错误包计数  LOCAL_SIG_MB_UART7_ERR_TIMES（Excel 第 55 行） */
    {.sig_id = LOCAL_SIG_MB_UART7_ERR_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 串口7正常收包计数  LOCAL_SIG_MB_UART7_PKT_TIMES（Excel 第 56 行） */
    {.sig_id = LOCAL_SIG_MB_UART7_PKT_TIMES, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* AES KEY 值  LOCAL_SIG_TR_AES_KEY_VAL（Excel 第 57 行） */
    {.sig_id = LOCAL_SIG_TR_AES_KEY_VAL, .sig_size = 16, .sig_flag = (5),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = local_tr_aes_key_config},
    /* 报文重定向源端口  LOCAL_SIG_REDIRECT_SRC_PORT（Excel 第 58 行） */
    {.sig_id = LOCAL_SIG_REDIRECT_SRC_PORT, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = redirect_sig_callback},
    /* 报文重定向目的端口  LOCAL_SIG_REDIRECT_DST_PORT（Excel 第 59 行） */
    {.sig_id = LOCAL_SIG_REDIRECT_DST_PORT, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = redirect_sig_callback},
    /* 报文重定向时间（小时）  LOCAL_SIG_REDIRECT_TIME（Excel 第 60 行） */
    {.sig_id = LOCAL_SIG_REDIRECT_TIME, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = redirect_sig_callback},
    /* 串口1帧间隔（ms  LOCAL_SIG_UART_PORT1_IFS（Excel 第 61 行） */
    {.sig_id = LOCAL_SIG_UART_PORT1_IFS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口2帧间隔（ms）  LOCAL_SIG_UART_PORT2_IFS（Excel 第 62 行） */
    {.sig_id = LOCAL_SIG_UART_PORT2_IFS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口3帧间隔（ms）  LOCAL_SIG_UART_PORT3_IFS（Excel 第 63 行） */
    {.sig_id = LOCAL_SIG_UART_PORT3_IFS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口4帧间隔（ms）  LOCAL_SIG_UART_PORT4_IFS（Excel 第 64 行） */
    {.sig_id = LOCAL_SIG_UART_PORT4_IFS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口5帧间隔（ms）  LOCAL_SIG_UART_PORT5_IFS（Excel 第 65 行） */
    {.sig_id = LOCAL_SIG_UART_PORT5_IFS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口6帧间隔（ms）  LOCAL_SIG_UART_PORT6_IFS（Excel 第 66 行） */
    {.sig_id = LOCAL_SIG_UART_PORT6_IFS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* 串口7帧间隔（ms）  LOCAL_SIG_UART_PORT7_IFS（Excel 第 67 行） */
    {.sig_id = LOCAL_SIG_UART_PORT7_IFS, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* CAN口1通道1范围  LOCAL_SIG_CAN_PORT1_CHANNEL1_RANGE（Excel 第 68 行） */
    {.sig_id = LOCAL_SIG_CAN_PORT1_CHANNEL1_RANGE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* CAN口1通道2范围  LOCAL_SIG_CAN_PORT1_CHANNEL2_RANGE（Excel 第 69 行） */
    {.sig_id = LOCAL_SIG_CAN_PORT1_CHANNEL2_RANGE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* CAN口1通道3范围  LOCAL_SIG_CAN_PORT1_CHANNEL3_RANGE（Excel 第 70 行） */
    {.sig_id = LOCAL_SIG_CAN_PORT1_CHANNEL3_RANGE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* CAN口2通道1范围  LOCAL_SIG_CAN_PORT2_CHANNEL1_RANGE（Excel 第 71 行） */
    {.sig_id = LOCAL_SIG_CAN_PORT2_CHANNEL1_RANGE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* CAN口2通道2范围  LOCAL_SIG_CAN_PORT2_CHANNEL2_RANGE（Excel 第 72 行） */
    {.sig_id = LOCAL_SIG_CAN_PORT2_CHANNEL2_RANGE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* CAN口2通道3范围  LOCAL_SIG_CAN_PORT2_CHANNEL3_RANGE（Excel 第 73 行） */
    {.sig_id = LOCAL_SIG_CAN_PORT2_CHANNEL3_RANGE, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = local_equip_take_sig_effect},
    /* modbustcp server使能1  LOCAL_SIG_CMM_MBTCP_SERVER_FLAG1（Excel 第 74 行） */
    {.sig_id = LOCAL_SIG_CMM_MBTCP_SERVER_FLAG1, .sig_size = 2, .sig_flag = (17),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* modbustcp server监听端口1  LOCAL_SIG_CMM_MBTCP_SERVER_PORT1（Excel 第 75 行） */
    {.sig_id = LOCAL_SIG_CMM_MBTCP_SERVER_PORT1, .sig_size = 2, .sig_flag = (17),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 以太网DHCP使能开关  LOCAL_SIG_ETH_DHCP_ENABLE（Excel 第 76 行） */
    {.sig_id = LOCAL_SIG_ETH_DHCP_ENABLE, .sig_size = 2, .sig_flag = (17),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = eth_sig_effect},
    /* 以太网IP  LOCAL_SIG_ETH_IP（Excel 第 77 行） */
    {.sig_id = LOCAL_SIG_ETH_IP, .sig_size = 16, .sig_flag = ((FLAG_PERSISTENCE |FLAG_PERSISTENCE_SYNC | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = eth_sig_effect},
    /* 以太网子网掩码  LOCAL_SIG_ETH_MASK（Excel 第 78 行） */
    {.sig_id = LOCAL_SIG_ETH_MASK, .sig_size = 16, .sig_flag = ((FLAG_PERSISTENCE |FLAG_PERSISTENCE_SYNC | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = eth_sig_effect},
    /* 以太网网关  LOCAL_SIG_ETH_GATEWAY（Excel 第 79 行） */
    {.sig_id = LOCAL_SIG_ETH_GATEWAY, .sig_size = 16, .sig_flag = ((FLAG_PERSISTENCE |FLAG_PERSISTENCE_SYNC | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = eth_sig_effect},
    /* 以太网DNS1  LOCAL_SIG_ETH_DNS1（Excel 第 80 行） */
    {.sig_id = LOCAL_SIG_ETH_DNS1, .sig_size = 16, .sig_flag = ((FLAG_PERSISTENCE |FLAG_PERSISTENCE_SYNC | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = eth_sig_effect},
    /* 以太网DNS2  LOCAL_SIG_ETH_DNS2（Excel 第 81 行） */
    {.sig_id = LOCAL_SIG_ETH_DNS2, .sig_size = 16, .sig_flag = ((FLAG_PERSISTENCE |FLAG_PERSISTENCE_SYNC | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = eth_sig_effect},
    /* dsp的数量规格,修改该测点需要保证所有设备已经关机  LOCAL_SIG_DSP_DEV_NUM（Excel 第 82 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_NUM, .sig_size = 2, .sig_flag = (17),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = DSP_Dev_Num_Set},
    /* 查询DSP在线状态  LOCAL_SIG_DSP_ON_LINE_NUM（Excel 第 83 行） */
    {.sig_id = LOCAL_SIG_DSP_ON_LINE_NUM, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 查询DSP在线状态  LOCAL_SIG_DSP_ON_LINE_NUM（Excel 第 84 行） */
    {.sig_id = LOCAL_SIG_DSP_ON_LINE_NUM, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 查询DSP在线状态  LOCAL_SIG_DSP_ON_LINE_NUM（Excel 第 85 行） */
    {.sig_id = LOCAL_SIG_DSP_ON_LINE_NUM, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* NTP服务器  LOCAL_SIG_NTP_SERVER（Excel 第 86 行） */
    {.sig_id = LOCAL_SIG_NTP_SERVER, .sig_size = 64, .sig_flag = (17),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* NTP对时时间间隔 单位:秒  LOCAL_SIG_NTP_TIME_INTERVAL（Excel 第 87 行） */
    {.sig_id = LOCAL_SIG_NTP_TIME_INTERVAL, .sig_size = 4, .sig_flag = (17),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = MPP_NULL_PTR},
    /* NTP对时成功时间  LOCAL_SIG_NTP_SYNC_TIME（Excel 第 88 行） */
    {.sig_id = LOCAL_SIG_NTP_SYNC_TIME, .sig_size = 32, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* 单包广播报文连续发送的次数  LOCAL_SIG_DEV_BRD_SEND_CNT（Excel 第 89 行） */
    {.sig_id = LOCAL_SIG_DEV_BRD_SEND_CNT, .sig_size = 1, .sig_flag = (17),
     .data_type = DATA_TYPE_U8, .pf_sig_proc = MPP_NULL_PTR},
    /* 未绑定的DSP数量  LOCAL_SIG_NOT_BOUND_DSP_NUM（Excel 第 90 行） */
    {.sig_id = LOCAL_SIG_NOT_BOUND_DSP_NUM, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* DSP设备SN数据池-SN1  LOCAL_SIG_DSP_DEV_SN_1（Excel 第 91 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_1, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN2  LOCAL_SIG_DSP_DEV_SN_2（Excel 第 92 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_2, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN3  LOCAL_SIG_DSP_DEV_SN_3（Excel 第 93 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_3, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN4  LOCAL_SIG_DSP_DEV_SN_4（Excel 第 94 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_4, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN5  LOCAL_SIG_DSP_DEV_SN_5（Excel 第 95 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_5, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN6  LOCAL_SIG_DSP_DEV_SN_6（Excel 第 96 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_6, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN7  LOCAL_SIG_DSP_DEV_SN_7（Excel 第 97 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_7, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN8  LOCAL_SIG_DSP_DEV_SN_8（Excel 第 98 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_8, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN9  LOCAL_SIG_DSP_DEV_SN_9（Excel 第 99 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_9, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN10  LOCAL_SIG_DSP_DEV_SN_10（Excel 第 100 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_10, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN11  LOCAL_SIG_DSP_DEV_SN_11（Excel 第 101 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_11, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN12  LOCAL_SIG_DSP_DEV_SN_12（Excel 第 102 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_12, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN13  LOCAL_SIG_DSP_DEV_SN_13（Excel 第 103 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_13, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN14  LOCAL_SIG_DSP_DEV_SN_14（Excel 第 104 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_14, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN15  LOCAL_SIG_DSP_DEV_SN_15（Excel 第 105 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_15, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* DSP设备SN数据池-SN16  LOCAL_SIG_DSP_DEV_SN_16（Excel 第 106 行） */
    {.sig_id = LOCAL_SIG_DSP_DEV_SN_16, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* AES iv 值  LOCAL_SIG_275（Excel 第 107 行） */
    {.sig_id = LOCAL_SIG_275, .sig_size = 16, .sig_flag = (5),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = local_tr_aes_key_config},
    /* 转发接收到增量报文标记  LOCAL_SIG_327（Excel 第 108 行） */
    {.sig_id = LOCAL_SIG_327, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 设备类型改变  LOCAL_SIG_1062（Excel 第 109 行） */
    {.sig_id = LOCAL_SIG_1062, .sig_size = 2, .sig_flag = (PARA_STOR_UNSET_RT),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 设备类型编码（北向机器型号编码）  LOCAL_SIG_1481（Excel 第 110 行） */
    {.sig_id = LOCAL_SIG_1481, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 设置执行故障录播的DSP地址16027 3x  LOCAL_SIG_16027（Excel 第 111 行） */
    {.sig_id = LOCAL_SIG_16027, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 录波数据总条数30078 3x  LOCAL_SIG_1621（Excel 第 112 行） */
    {.sig_id = LOCAL_SIG_1621, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 录波数据读取进度30079 3x  LOCAL_SIG_1622（Excel 第 113 行） */
    {.sig_id = LOCAL_SIG_1622, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 整机属性协议号2500 3x  LOCAL_SIG_2500（Excel 第 114 行） */
    {.sig_id = LOCAL_SIG_2500, .sig_size = 4, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2500_2502},
    /* 北向 整机属性协议版本2502 3x  LOCAL_SIG_2502（Excel 第 115 行） */
    {.sig_id = LOCAL_SIG_2502, .sig_size = 4, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = property_prtol_3X_2500_2502},
    /* 北向 协议地址长度2504 3x  LOCAL_SIG_2504（Excel 第 116 行） */
    {.sig_id = LOCAL_SIG_2504, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 南向 机器型号30360 4x 北向 机器型号2516 3x  LOCAL_SIG_2516（Excel 第 117 行） */
    {.sig_id = LOCAL_SIG_2516, .sig_size = 16, .sig_flag = ((PARA_STOR_UNSET_RT | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = device_name_3X_2516},
    /* 北向 故障录波协议号2569 3x  LOCAL_SIG_2569（Excel 第 118 行） */
    {.sig_id = LOCAL_SIG_2569, .sig_size = 4, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = property_prtol_3X_2569_2575},
    /* 北向 故障录波协议版本2571 3x  LOCAL_SIG_2571（Excel 第 119 行） */
    {.sig_id = LOCAL_SIG_2571, .sig_size = 4, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = property_prtol_3X_2569_2575},
    /* 北向 上传固件版本数量2581 3x  LOCAL_SIG_2581（Excel 第 120 行） */
    {.sig_id = LOCAL_SIG_2581, .sig_size = 2, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = property_prtol_3X_2581},
    /* 北向 固件版本号1 2582 3x  LOCAL_SIG_VERSION（Excel 第 121 行） */
    {.sig_id = LOCAL_SIG_VERSION, .sig_size = 30, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2582_2657},
    /* 北向 固件版本号1 2582 3x  LOCAL_SIG_VERSION（Excel 第 122 行） */
    {.sig_id = LOCAL_SIG_VERSION, .sig_size = 30, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2582_2657},
    /* 北向 固件版本号2 2597 3x  LOCAL_SIG_2597（Excel 第 123 行） */
    {.sig_id = LOCAL_SIG_2597, .sig_size = 30, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2582_2657},
    /* 北向 固件版本号3 2612 3x  LOCAL_SIG_2612（Excel 第 124 行） */
    {.sig_id = LOCAL_SIG_2612, .sig_size = 30, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2582_2657},
    /* 北向 固件版本号4 2627 3x  LOCAL_SIG_2627（Excel 第 125 行） */
    {.sig_id = LOCAL_SIG_2627, .sig_size = 30, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2582_2657},
    /* 北向 固件版本号5 2642 3x  LOCAL_SIG_2642（Excel 第 126 行） */
    {.sig_id = LOCAL_SIG_2642, .sig_size = 30, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2582_2657},
    /* 北向 固件版本号6 2657 3x  LOCAL_SIG_2657（Excel 第 127 行） */
    {.sig_id = LOCAL_SIG_2657, .sig_size = 30, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2582_2657},
    /* 北向 固件版本号7 2672 3x  LOCAL_SIG_2672（Excel 第 128 行） */
    {.sig_id = LOCAL_SIG_2672, .sig_size = 30, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2582_2657},
    /* 北向 固件版本号8 2687 3x  LOCAL_SIG_2687（Excel 第 129 行） */
    {.sig_id = LOCAL_SIG_2687, .sig_size = 30, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2582_2657},
    /* 北向 固件版本号9 2702 3x  LOCAL_SIG_2702（Excel 第 130 行） */
    {.sig_id = LOCAL_SIG_2702, .sig_size = 30, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = property_prtol_3X_2582_2657},
    /* 北向 固件版本号10 2717 3x  LOCAL_SIG_2717（Excel 第 131 行） */
    {.sig_id = LOCAL_SIG_2717, .sig_size = 30, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 固件版本号11 2732 3x  LOCAL_SIG_2732（Excel 第 132 行） */
    {.sig_id = LOCAL_SIG_2732, .sig_size = 30, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 固件版本号12 2747 3x  LOCAL_SIG_2747（Excel 第 133 行） */
    {.sig_id = LOCAL_SIG_2747, .sig_size = 30, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 属性协议更新流水号5220 3x  LOCAL_SIG_5220（Excel 第 134 行） */
    {.sig_id = LOCAL_SIG_5220, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 SN序列号5378 3x  LOCAL_SIG_5378（Excel 第 135 行） */
    {.sig_id = LOCAL_SIG_5378, .sig_size = 20, .sig_flag = (PARA_STOR_UNSET_RT),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 SN序列号5378 3x  LOCAL_SIG_5378（Excel 第 136 行） */
    {.sig_id = LOCAL_SIG_5378, .sig_size = 20, .sig_flag = (PARA_STOR_UNSET_RT),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 SN序列号5378 3x  LOCAL_SIG_5378（Excel 第 137 行） */
    {.sig_id = LOCAL_SIG_5378, .sig_size = 20, .sig_flag = (PARA_STOR_UNSET_RT),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 功能枚举5487 3x  LOCAL_SIG_5487（Excel 第 138 行） */
    {.sig_id = LOCAL_SIG_5487, .sig_size = 4, .sig_flag = (PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK),
     .data_type = DATA_TYPE_S32, .pf_sig_proc = function_enum_3X_5487_5488},
    /* 北向 功能枚举5487 3x  LOCAL_SIG_5487（Excel 第 139 行） */
    {.sig_id = LOCAL_SIG_5487, .sig_size = 4, .sig_flag = (PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK),
     .data_type = DATA_TYPE_S32, .pf_sig_proc = function_enum_3X_5487_5488},
    /* 北向 录波数据导出 30034 4x  LOCAL_SIG_30034（Excel 第 140 行） */
    {.sig_id = LOCAL_SIG_30034, .sig_size = 2, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = fault_record_4X_30034},
    /* 北向 设置执行故障录播的DSP地址30098 4x  LOCAL_SIG_30098（Excel 第 141 行） */
    {.sig_id = LOCAL_SIG_30098, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 日志数据导出类型 31999 4x  LOCAL_SIG_31999（Excel 第 142 行） */
    {.sig_id = LOCAL_SIG_31999, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = log_type_4x_31999},
    /* 北向 功能选择 32000 4x  LOCAL_SIG_32000（Excel 第 143 行） */
    {.sig_id = LOCAL_SIG_32000, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = log_switch_4x_32000},
    /* 北向 日志文件索引 32001 4x  LOCAL_SIG_32001（Excel 第 144 行） */
    {.sig_id = LOCAL_SIG_32001, .sig_size = 4, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = log_switch_4x_32001},
    /* 北向 日志有效位2 32003 4x  LOCAL_SIG_32003（Excel 第 145 行） */
    {.sig_id = LOCAL_SIG_32003, .sig_size = 4, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = log_bit_4x_32003},
    /* 北向 日志有效位 32005 4x  LOCAL_SIG_32005（Excel 第 146 行） */
    {.sig_id = LOCAL_SIG_32005, .sig_size = 4, .sig_flag = ((PARA_UNSTOR_UNSET | FLAG_READ_CALLBACK)),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = log_bit_4x_32005},
    /* 北向 日志上传运行故障码 32007 4x  LOCAL_SIG_32007（Excel 第 147 行） */
    {.sig_id = LOCAL_SIG_32007, .sig_size = 4, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 VI扫描故障码 32009 4x  LOCAL_SIG_32009（Excel 第 148 行） */
    {.sig_id = LOCAL_SIG_32009, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 设置读取故障录波第n条记录 32019 4x  LOCAL_SIG_32019（Excel 第 149 行） */
    {.sig_id = LOCAL_SIG_32019, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 记录类型 32052 4x  LOCAL_SIG_32052（Excel 第 150 行） */
    {.sig_id = LOCAL_SIG_32052, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 数据类型 32053 4x  LOCAL_SIG_32053（Excel 第 151 行） */
    {.sig_id = LOCAL_SIG_32053, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 可读记录总数 32054 4x  LOCAL_SIG_32054（Excel 第 152 行） */
    {.sig_id = LOCAL_SIG_32054, .sig_size = 4, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 当前记录序号 32056 4x  LOCAL_SIG_32056（Excel 第 153 行） */
    {.sig_id = LOCAL_SIG_32056, .sig_size = 4, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 记录子序号 32058 4x  LOCAL_SIG_32058（Excel 第 154 行） */
    {.sig_id = LOCAL_SIG_32058, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = MPP_NULL_PTR},
    /* 北向 数据有效长度 4x  LOCAL_SIG_32061（Excel 第 155 行） */
    {.sig_id = LOCAL_SIG_32061, .sig_size = 2, .sig_flag = (PARA_UNSTOR_UNSET),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = MPP_NULL_PTR},
};

const DM_SIG_CFG_S g_dsp_data_table[] = {
    /* 固件版本号版本  ParamProductType（Excel 第 2 行） */
    {.sig_id = PARAM_PRODUCT_TYPE, .sig_size = 30, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = NULL},
    /* 机器型号  ParamProductCode（Excel 第 3 行） */
    {.sig_id = PARAM_PRODUCT_CODE, .sig_size = 16, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = NULL},
    /* 机器版本号  ParamClientCode（Excel 第 4 行） */
    {.sig_id = PARAM_CLIENT_CODE, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = NULL},
    /* 机器型号编码  ParamType（Excel 第 5 行） */
    {.sig_id = PARAM_TYPE, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 设备类型编码  ParamMatrilCode（Excel 第 6 行） */
    {.sig_id = PARAM_MATRIL_CODE, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 序列号  ParamVehicleType（Excel 第 7 行） */
    {.sig_id = PARAM_VEHICLE_TYPE, .sig_size = 20, .sig_flag = (0),
     .data_type = DATA_TYPE_STRING, .pf_sig_proc = NULL},
    /* DCDC任务级故障字1  DcdcTskFwFltFlg1（Excel 第 8 行） */
    {.sig_id = DCDC_TSK_FW_FLT_FLG1, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* DCDC任务级故障字2  DcdcTskFwFltFlg2（Excel 第 9 行） */
    {.sig_id = DCDC_TSK_FW_FLT_FLG2, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* DCDC任务级故障字3  DcdcTskFwFltFlg3（Excel 第 10 行） */
    {.sig_id = DCDC_TSK_FW_FLT_FLG3, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* DCDC任务级故障字4  DcdcTskFwFltFlg4（Excel 第 11 行） */
    {.sig_id = DCDC_TSK_FW_FLT_FLG4, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* DCDC任务级告警字1  DcdcTskWarnFltFlg1（Excel 第 12 行） */
    {.sig_id = DCDC_TSK_WARN_FLT_FLG1, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* DCDC任务级告警字2  DcdcTskWarnFltFlg2（Excel 第 13 行） */
    {.sig_id = DCDC_TSK_WARN_FLT_FLG2, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* DCDC任务级告警字3  DcdcTskWarnFltFlg3（Excel 第 14 行） */
    {.sig_id = DCDC_TSK_WARN_FLT_FLG3, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 主状态机工作模式  MainWrkMode（Excel 第 15 行） */
    {.sig_id = MAIN_WRK_MODE, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 整流Rect1电压  F32_Rect1Vol（Excel 第 54 行） */
    {.sig_id = F32_RECT1_VOL, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 电网L-R to L-S线电压线电压  F32_LineVolRtoS（Excel 第 55 行） */
    {.sig_id = F32_LINE_VOL_RTO_S, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 电网L-S to L-T线电压线电压  F32_LineVolStoT（Excel 第 56 行） */
    {.sig_id = F32_LINE_VOL_STO_T, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 电网R相电压  F32_PhaseVolR（Excel 第 57 行） */
    {.sig_id = F32_PHASE_VOL_R, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 电网S相电压  F32_PhaseVolS（Excel 第 58 行） */
    {.sig_id = F32_PHASE_VOL_S, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 电网T相电压  F32_PhaseVolT（Excel 第 59 行） */
    {.sig_id = F32_PHASE_VOL_T, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* Boost输出母线电压  F32_BoostBusVol（Excel 第 60 行） */
    {.sig_id = F32_BOOST_BUS_VOL, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* Buck输出电压  F32_OutputVol（Excel 第 61 行） */
    {.sig_id = F32_OUTPUT_VOL, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 电池电压  F32_BatVol（Excel 第 62 行） */
    {.sig_id = F32_BAT_VOL, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* Buck输出电流  F32_OutputCurr（Excel 第 63 行） */
    {.sig_id = F32_OUTPUT_CURR, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 中断故障字1  U16_IntFaultWord1（Excel 第 64 行） */
    {.sig_id = U16_INT_FAULT_WORD1, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 中断故障字2  U16_IntFaultWord2（Excel 第 65 行） */
    {.sig_id = U16_INT_FAULT_WORD2, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 中断告警字1  U16_IntWarnWord1（Excel 第 66 行） */
    {.sig_id = U16_INT_WARN_WORD1, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 中断告警字2  U16_IntWarnWord2（Excel 第 67 行） */
    {.sig_id = U16_INT_WARN_WORD2, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 主控板单Cell工作指令  ARM_ComCellWorkCmd（Excel 第 151 行） */
    {.sig_id = ARM_COM_CELL_WORK_CMD, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* 主控板Buck工作电压指令  ARM_ComtBuckVolCmd（Excel 第 152 行） */
    {.sig_id = ARM_COMT_BUCK_VOL_CMD, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 主控板Boost工作电压指令  ARM_ComBoostVolCmd（Excel 第 153 行） */
    {.sig_id = ARM_COM_BOOST_VOL_CMD, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 主控板限流值  ARM_ComCurrLmt（Excel 第 154 行） */
    {.sig_id = ARM_COM_CURR_LMT, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 主控板平均电流  ARM_AverageCurr（Excel 第 155 行） */
    {.sig_id = ARM_AVERAGE_CURR, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* 主控板强制电池工作使能  ARM_ComForceBatWrkEn（Excel 第 156 行） */
    {.sig_id = ARM_COM_FORCE_BAT_WRK_EN, .sig_size = 2, .sig_flag = (0),
     .data_type = DATA_TYPE_U16, .pf_sig_proc = NULL},
    /* AC切电池欠压阈值  AC2BatLowThresh（Excel 第 184 行） */
    {.sig_id = AC2_BAT_LOW_THRESH, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
    /* AC切电池过压阈值  AC2BatHighThresh（Excel 第 185 行） */
    {.sig_id = AC2_BAT_HIGH_THRESH, .sig_size = 4, .sig_flag = (0),
     .data_type = DATA_TYPE_U32, .pf_sig_proc = NULL},
};

UINT16 get_g_arm_data_table_len(void)
{
    UINT16 table_length = 0;
    table_length = ITEM_OF(g_arm_data_table);
    return table_length;
}

UINT16 get_g_dsp_data_table_len(void)
{
    UINT16 table_length = 0;
    table_length = ITEM_OF(g_dsp_data_table);
    return table_length;
}
