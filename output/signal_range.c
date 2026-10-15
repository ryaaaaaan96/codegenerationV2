/**********************************************************************
 * @file       signal_range.c
 * @brief      自动生成的设备测点默认值及范围管理，请勿手工修改
 * @version    V1.0.0
 * @date       2026/10/14
 * @author     Ryan
 * Copyright   1997-2030 SUNGROW.All Rights Reserved.
 ***********************************************************************/
#include "signal_range.h"

#include "collect_lib.h"
#include "globalfunction.h"
#include "local_equip.h"
#include "pub_sig_def.h"
#include "signal_id_map.h"

typedef struct
{
    UINT8 is_recover;
    UINT16 sig_id;
    DATA_U def_value;
    DATA_U min_value;
    DATA_U max_value;
    DATA_TYPE_E data_type;
    UINT32 data_size;
} SIGNAL_RANGE_ITEM_S;

/* 按实际数字 sig_id 升序生成，供 signal_range_find() 二分查找。 */
static const SIGNAL_RANGE_ITEM_S g_local_range_table[] = {
    /* 设备转发地址（UPM单板测点第 2 行，数字 ID：1） */
    {.sig_id = LOCAL_SIG_TR_ADDR, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 247},
    /* 串口1工作模式（UPM单板测点第 8 行，数字 ID：101） */
    {.sig_id = LOCAL_SIG_UART_PORT1_WORKMODE, .is_recover = 6, .data_type = DATA_TYPE_U32, .data_size = sizeof(UINT32), .def_value.u32 = 2, .min_value.u32 = 5, .max_value.u32 = 0},
    /* 串口1波特率（UPM单板测点第 9 行，数字 ID：102） */
    {.sig_id = LOCAL_SIG_UART_PORT1_BAUD, .is_recover = 6, .data_type = DATA_TYPE_U32, .data_size = sizeof(UINT32), .def_value.u32 = 115200, .min_value.u32 = 460800, .max_value.u32 = 0},
    /* 串口1奇偶校验（UPM单板测点第 10 行，数字 ID：103） */
    {.sig_id = LOCAL_SIG_UART_PORT1_PARITY, .is_recover = 6, .data_type = DATA_TYPE_U32, .data_size = sizeof(UINT32), .def_value.u32 = E_USART_PARITY_NO, .min_value.u32 = E_USART_PARITY_EVEN, .max_value.u32 = E_USART_PARITY_NO},
    /* 串口1停止位（UPM单板测点第 11 行，数字 ID：104） */
    {.sig_id = LOCAL_SIG_UART_PORT1_STOP_BITS, .is_recover = 6, .data_type = DATA_TYPE_U32, .data_size = sizeof(UINT32), .def_value.u32 = E_USART_STOP_BIT1, .min_value.u32 = E_USART_STOP_BIT2, .max_value.u32 = E_USART_STOP_BIT1},
    /* 以太网IP（UPM单板测点第 77 行，数字 ID：265） */
    {.sig_id = LOCAL_SIG_ETH_IP, .is_recover = 6, .data_type = DATA_TYPE_STRING, .data_size = 16, .def_value.pst = (VOID *)"12.12.12.12"},
    /* 以太网子网掩码（UPM单板测点第 78 行，数字 ID：266） */
    {.sig_id = LOCAL_SIG_ETH_MASK, .is_recover = 6, .data_type = DATA_TYPE_STRING, .data_size = 16, .def_value.pst = (VOID *)"255.0.0.0"},
    /* 以太网网关（UPM单板测点第 79 行，数字 ID：267） */
    {.sig_id = LOCAL_SIG_ETH_GATEWAY, .is_recover = 6, .data_type = DATA_TYPE_STRING, .data_size = 16, .def_value.pst = (VOID *)"12.12.12.1"},
    /* 以太网DNS1（UPM单板测点第 80 行，数字 ID：268） */
    {.sig_id = LOCAL_SIG_ETH_DNS1, .is_recover = 6, .data_type = DATA_TYPE_STRING, .data_size = 16, .def_value.pst = (VOID *)"1.2.4.8"},
    /* 以太网DNS2（UPM单板测点第 81 行，数字 ID：269） */
    {.sig_id = LOCAL_SIG_ETH_DNS2, .is_recover = 6, .data_type = DATA_TYPE_STRING, .data_size = 16, .def_value.pst = (VOID *)"8.8.8.8"},
    /* 负载输出电压设置（UPM单板测点第 156 行，数字 ID：1017） */
    {.sig_id = UPM_SIG_LOAD_VOL_SET, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 270},
    /* 负载输出限流值（UPM单板测点第 157 行，数字 ID：1018） */
    {.sig_id = UPM_SIG_LOAD_CUR_SET, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 100},
    /* 负载输出电压缺省值（UPM单板测点第 158 行，数字 ID：1019） */
    {.sig_id = UPM_SIG_LOAD_DEFAULT_VOL, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 270},
    /* 电池电压设置（UPM单板测点第 159 行，数字 ID：1020） */
    {.sig_id = UPM_SIG_BAT_VOL_SET, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 270},
    /* 电池限流设置（UPM单板测点第 160 行，数字 ID：1021） */
    {.sig_id = UPM_SIG_BAT_CUR_SET, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 10},
    /* 电池输出点电压缺省值（UPM单板测点第 161 行，数字 ID：1022） */
    {.sig_id = UPM_SIG_BAT_DEFAULT_VOL, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 270},
    /* 模块交流过压值（UPM单板测点第 162 行，数字 ID：1023） */
    {.sig_id = UPM_SIG_AC_OVER_VOL, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 420},
    /* 模块交流欠压值（UPM单板测点第 163 行，数字 ID：1024） */
    {.sig_id = UPM_SIG_AC_UNDER_VOL, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 370},
    /* 模块交流失压值（UPM单板测点第 164 行，数字 ID：1025） */
    {.sig_id = UPM_SIG_AC_NONE_VOL, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 170},
    /* 模块交流频率高门限值（UPM单板测点第 165 行，数字 ID：1026） */
    {.sig_id = UPM_SIG_AC_OVER_FREQ, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 70},
    /* 模块交流频率低门限值（UPM单板测点第 166 行，数字 ID：1027） */
    {.sig_id = UPM_SIG_AC_UNDER_FREQ, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 40},
    /* 设备类型编码（北向机器型号编码）（UPM单板测点第 94 行，数字 ID：1481） */
    {.sig_id = LOCAL_SIG_1481, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = E_DEVTYPE_SGAIDC},
};

/* DSP1～DSP8 共用同一张范围表，同样按实际数字 sig_id 升序生成。 */
static const SIGNAL_RANGE_ITEM_S g_dsp_range_table[] = {
    /* 序列号（UPM-DSP采集数据第 7 行，数字 ID：14） */
    {.sig_id = PARAM_VEHICLE_TYPE, .is_recover = 6, .data_type = DATA_TYPE_STRING, .data_size = 20, .def_value.pst = (VOID *)"0", .min_value.pst = (VOID *)"0", .max_value.pst = (VOID *)"65535"},
    /* DCDC任务级故障字1（UPM-DSP采集数据第 8 行，数字 ID：1007） */
    {.sig_id = DCDC_TSK_FW_FLT_FLG1, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* DCDC任务级故障字2（UPM-DSP采集数据第 9 行，数字 ID：1008） */
    {.sig_id = DCDC_TSK_FW_FLT_FLG2, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* DCDC任务级故障字3（UPM-DSP采集数据第 10 行，数字 ID：1009） */
    {.sig_id = DCDC_TSK_FW_FLT_FLG3, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* DCDC任务级故障字4（UPM-DSP采集数据第 11 行，数字 ID：1010） */
    {.sig_id = DCDC_TSK_FW_FLT_FLG4, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* DCDC任务级告警字1（UPM-DSP采集数据第 12 行，数字 ID：1011） */
    {.sig_id = DCDC_TSK_WARN_FLT_FLG1, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* DCDC任务级告警字2（UPM-DSP采集数据第 13 行，数字 ID：1012） */
    {.sig_id = DCDC_TSK_WARN_FLT_FLG2, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* DCDC任务级告警字3（UPM-DSP采集数据第 14 行，数字 ID：1013） */
    {.sig_id = DCDC_TSK_WARN_FLT_FLG3, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* 主状态机工作模式（UPM-DSP采集数据第 15 行，数字 ID：1014） */
    {.sig_id = MAIN_WRK_MODE, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 500},
    /* 主控板单Cell工作指令（UPM-DSP采集数据第 154 行，数字 ID：1015） */
    {.sig_id = ARM_COM_CELL_WORK_CMD, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 1},
    /* 主控板Buck工作电压指令（UPM-DSP采集数据第 155 行，数字 ID：1016） */
    {.sig_id = ARM_COMT_BUCK_VOL_CMD, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.000000, .min_value.s32 = 0.000000, .max_value.s32 = 2000.000000},
    /* 主控板Boost工作电压指令（UPM-DSP采集数据第 156 行，数字 ID：1017） */
    {.sig_id = ARM_COM_BOOST_VOL_CMD, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.000000, .min_value.s32 = 0.000000, .max_value.s32 = 2000.000000},
    /* 主控板限流值（UPM-DSP采集数据第 157 行，数字 ID：1018） */
    {.sig_id = ARM_COM_CURR_LMT, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.000000, .min_value.s32 = 0.000000, .max_value.s32 = 1000.000000},
    /* 主控板平均电流（UPM-DSP采集数据第 158 行，数字 ID：1019） */
    {.sig_id = ARM_AVERAGE_CURR, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.000000, .min_value.s32 = 0.000000, .max_value.s32 = 1000.000000},
    /* 主控板强制电池工作使能（UPM-DSP采集数据第 160 行，数字 ID：1020） */
    {.sig_id = ARM_COM_FORCE_BAT_WRK_EN, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 1},
    /* 整流Rect1电压（UPM-DSP采集数据第 57 行，数字 ID：1021） */
    {.sig_id = F32_RECT1_VOL, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.00, .min_value.s32 = -100.00, .max_value.s32 = 65535.00},
    /* 电网L-R to L-S线电压线电压（UPM-DSP采集数据第 58 行，数字 ID：1022） */
    {.sig_id = F32_LINE_VOL_RTO_S, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.00, .min_value.s32 = -100.00, .max_value.s32 = 65535.00},
    /* 电网L-S to L-T线电压线电压（UPM-DSP采集数据第 59 行，数字 ID：1023） */
    {.sig_id = F32_LINE_VOL_STO_T, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.00, .min_value.s32 = -100.00, .max_value.s32 = 65535.00},
    /* 电网R相电压（UPM-DSP采集数据第 60 行，数字 ID：1024） */
    {.sig_id = F32_PHASE_VOL_R, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.00, .min_value.s32 = -100.00, .max_value.s32 = 65535.00},
    /* 电网S相电压（UPM-DSP采集数据第 61 行，数字 ID：1025） */
    {.sig_id = F32_PHASE_VOL_S, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.00, .min_value.s32 = -100.00, .max_value.s32 = 65535.00},
    /* 电网T相电压（UPM-DSP采集数据第 62 行，数字 ID：1026） */
    {.sig_id = F32_PHASE_VOL_T, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.00, .min_value.s32 = -100.00, .max_value.s32 = 65535.00},
    /* Boost输出母线电压（UPM-DSP采集数据第 63 行，数字 ID：1027） */
    {.sig_id = F32_BOOST_BUS_VOL, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.00, .min_value.s32 = -100.00, .max_value.s32 = 65535.00},
    /* Buck输出电压（UPM-DSP采集数据第 64 行，数字 ID：1028） */
    {.sig_id = F32_OUTPUT_VOL, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.00, .min_value.s32 = -100.00, .max_value.s32 = 65535.00},
    /* 电池电压（UPM-DSP采集数据第 65 行，数字 ID：1029） */
    {.sig_id = F32_BAT_VOL, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.00, .min_value.s32 = -100.00, .max_value.s32 = 65535.00},
    /* Buck输出电流（UPM-DSP采集数据第 66 行，数字 ID：1030） */
    {.sig_id = F32_OUTPUT_CURR, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.00, .min_value.s32 = -100.00, .max_value.s32 = 65535.00},
    /* 中断故障字1（UPM-DSP采集数据第 67 行，数字 ID：1031） */
    {.sig_id = U16_INT_FAULT_WORD1, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* 中断故障字2（UPM-DSP采集数据第 68 行，数字 ID：1032） */
    {.sig_id = U16_INT_FAULT_WORD2, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* 中断告警字1（UPM-DSP采集数据第 69 行，数字 ID：1033） */
    {.sig_id = U16_INT_WARN_WORD1, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* 中断告警字2（UPM-DSP采集数据第 70 行，数字 ID：1034） */
    {.sig_id = U16_INT_WARN_WORD2, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* AC切电池欠压阈值（UPM-DSP采集数据第 190 行，数字 ID：1035） */
    {.sig_id = AC2_BAT_LOW_THRESH, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 500.0, .min_value.s32 = 0.0, .max_value.s32 = 65535.0},
    /* AC切电池过压阈值（UPM-DSP采集数据第 191 行，数字 ID：1036） */
    {.sig_id = AC2_BAT_HIGH_THRESH, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 900.0, .min_value.s32 = 0.0, .max_value.s32 = 65535.0},
    /* 海拔默认值（UPM-DSP采集数据第 193 行，数字 ID：1037） */
    {.sig_id = ALTITUDE_DEFAULT, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 1000.0, .min_value.s32 = 0.0, .max_value.s32 = 65535.0},
    /* 电网频率（UPM-DSP采集数据第 192 行，数字 ID：1038） */
    {.sig_id = GRID_FREQUENCY, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 50.0, .min_value.s32 = 0.0, .max_value.s32 = 65535.0},
    /* 风扇1转速（UPM-DSP采集数据第 54 行，数字 ID：1039） */
    {.sig_id = U16_FAN_SPEED1, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 10000},
    /* 风扇2转速（UPM-DSP采集数据第 55 行，数字 ID：1040） */
    {.sig_id = U16_FAN_SPEED2, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 10000},
    /* 风扇3转速（UPM-DSP采集数据第 56 行，数字 ID：1041） */
    {.sig_id = U16_FAN_SPEED3, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 10000},
    /* Boost状态机工作状态（UPM-DSP采集数据第 71 行，数字 ID：1042） */
    {.sig_id = U16_BOOST_WRK_MODE, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 10},
    /* 主控板平均电压（UPM-DSP采集数据第 159 行，数字 ID：1043） */
    {.sig_id = ARM_AVERAGE_VOL, .is_recover = 6, .data_type = DATA_TYPE_S32, .data_size = sizeof(INT32), .def_value.s32 = 0.000000, .min_value.s32 = 0.000000, .max_value.s32 = 1000.000000},
    /* 设备类型编码（UPM-DSP采集数据第 6 行，数字 ID：1481） */
    {.sig_id = PARAM_MATRIL_CODE, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* 机器型号编码（UPM-DSP采集数据第 5 行，数字 ID：2515） */
    {.sig_id = PARAM_TYPE, .is_recover = 6, .data_type = DATA_TYPE_U16, .data_size = sizeof(UINT16), .def_value.u16 = 0, .min_value.u16 = 0, .max_value.u16 = 65535},
    /* 机器型号（UPM-DSP采集数据第 3 行，数字 ID：2516） */
    {.sig_id = PARAM_PRODUCT_CODE, .is_recover = 6, .data_type = DATA_TYPE_STRING, .data_size = 16, .def_value.pst = (VOID *)"0", .min_value.pst = (VOID *)"0", .max_value.pst = (VOID *)"65535"},
    /* 机器版本号（UPM-DSP采集数据第 4 行，数字 ID：2524） */
    {.sig_id = PARAM_CLIENT_CODE, .is_recover = 6, .data_type = DATA_TYPE_STRING, .data_size = 20, .def_value.pst = (VOID *)"0", .min_value.pst = (VOID *)"0", .max_value.pst = (VOID *)"65535"},
    /* 固件版本号版本（UPM-DSP采集数据第 2 行，数字 ID：2582） */
    {.sig_id = PARAM_PRODUCT_TYPE, .is_recover = 6, .data_type = DATA_TYPE_STRING, .data_size = 30, .def_value.pst = (VOID *)"0", .min_value.pst = (VOID *)"0", .max_value.pst = (VOID *)"65534"},
};

/**
 * @brief 选择设备范围表，并按测点 ID 执行二分查找
 * @note 两张自动生成表必须保持按实际数字 sig_id 升序排列。
 */
static const SIGNAL_RANGE_ITEM_S *signal_range_find(UINT16 dev_id, UINT16 sig_id)
{
    const SIGNAL_RANGE_ITEM_S *range_table;
    UINT16 range_count;
    INT32 left;
    INT32 right;

    switch (dev_id)
    {
        case CFG_DEV_LOCAL:
            range_table = g_local_range_table;
            range_count = (UINT16)(sizeof(g_local_range_table) / sizeof(g_local_range_table[0]));
            break;

        case CFG_DEV_DSP1:
        case CFG_DEV_DSP2:
        case CFG_DEV_DSP3:
        case CFG_DEV_DSP4:
        case CFG_DEV_DSP5:
        case CFG_DEV_DSP6:
        case CFG_DEV_DSP7:
        case CFG_DEV_DSP8:
            range_table = g_dsp_range_table;
            range_count = (UINT16)(sizeof(g_dsp_range_table) / sizeof(g_dsp_range_table[0]));
            break;

        default:
            return NULL;
    }

    left = 0;
    right = (INT32)range_count - 1;
    while (left <= right)
    {
        INT32 middle = left + ((right - left) / 2);
        UINT16 current_sig_id = range_table[middle].sig_id;

        if (sig_id < current_sig_id)
        {
            right = middle - 1;
        }
        else if (sig_id > current_sig_id)
        {
            left = middle + 1;
        }
        else
        {
            return &range_table[middle];
        }
    }
    return NULL;
}

INT32 signal_range_get(
    UINT16 dev_id,
    UINT16 sig_id,
    DM_SIG_DATA_S *range_data,
    BOOLEAN *recover)
{
    const SIGNAL_RANGE_ITEM_S *range_item;

    if ((range_data == NULL) || (recover == NULL))
    {
        return MPP_RET_ERR;
    }

    *recover = FALSE;
    range_item = signal_range_find(dev_id, sig_id);
    if (range_item != NULL)
    {
        range_data->def_value = range_item->def_value;
        range_data->min_value = range_item->min_value;
        range_data->max_value = range_item->max_value;
    }
    else
    {
        range_data->def_value.u32 = 0;
        range_data->min_value.u32 = 0;
        range_data->max_value.u32 = 0;
    }
    return MPP_RET_OK;
}

static VOID signal_range_restore_table(
    UINT16 dev_id,
    const SIGNAL_RANGE_ITEM_S *range_table,
    UINT16 range_count)
{
    UINT16 index;

    for (index = 0; index < range_count; index++)
    {
        const SIGNAL_RANGE_ITEM_S *range_item = &range_table[index];
        UINT8 *value;

        if (range_item->is_recover <= 1)
        {
            continue;
        }

        if (range_item->data_type == DATA_TYPE_STRING)
        {
            value = (UINT8 *)range_item->def_value.pst;
        }
        else
        {
            value = (UINT8 *)&range_item->def_value;
        }

        set_dp_para_value(
            dev_id,
            range_item->sig_id,
            (UINT16)range_item->data_size,
            value);
    }
}

INT32 signal_range_restore_default(VOID)
{
    UINT16 dev_id;

    signal_range_restore_table(
        CFG_DEV_LOCAL,
        g_local_range_table,
        (UINT16)(sizeof(g_local_range_table) / sizeof(g_local_range_table[0])));

    for (dev_id = CFG_DEV_DSP1; dev_id <= CFG_DEV_DSP8; dev_id++)
    {
        signal_range_restore_table(
            dev_id,
            g_dsp_range_table,
            (UINT16)(sizeof(g_dsp_range_table) / sizeof(g_dsp_range_table[0])));
    }
    return MPP_RET_OK;
}
