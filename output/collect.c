/**********************************************************************
 * @file       collect.c
 * @brief      自动生成的 DSP UPP 采集表，请勿手工修改
 * @version    V1.0.0
 * @date       2026/10/14
 * @author     Ryan
 * Copyright   1997-2030 SUNGROW.All Rights Reserved.
 ***********************************************************************/
#include "arc_byte_order.h"
#include "arc_public.h"
#include "data_process.h"
#include "port.h"
#include "collect_lib.h"
#include "transmit_lib.h"
#include "local_equip.h"
#include "dev_cfg.h"
#include "upp_m_ex.h"
#include "upp_public_ex.h"
#include "signal_id_map.h"

#define UPP_S_BYTE_ORDER_BIG       PUB_BYTE_ORDER_BIG

#define TO_SG_ADDR(vendor_addr)            ((vendor_addr) + 1)
#define TO_LAST_U16_SG_ADDR(vendor_addr)   ((TO_SG_ADDR(vendor_addr)) + 1)
#define TO_FIRST_U16_SG_ADDR(vendor_addr)  ((TO_SG_ADDR(vendor_addr)))


const UPP_M_MOD_DATA g_dsp_upp_collect_1[] = {

    /* 固件版本号版本（Excel 第 2 行） */
    {
        .mod_data_offset = 48, .mod_data_len = 30, .mod_data_type = UPP_DATA_TYPE_STRING,
        .data_len = 30, .data_type = UPP_DATA_TYPE_STRING, .sig_id = PARAM_PRODUCT_TYPE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (205), .dec_p = 1
    },

};


const UPP_M_MOD_DATA g_dsp_upp_collect_2[] = {

    /* 机器型号（Excel 第 3 行） */
    {
        .mod_data_offset = 8, .mod_data_len = 16, .mod_data_type = UPP_DATA_TYPE_STRING,
        .data_len = 16, .data_type = UPP_DATA_TYPE_STRING, .sig_id = PARAM_PRODUCT_CODE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (205), .dec_p = 1
    },

    /* 机器版本号（Excel 第 4 行） */
    {
        .mod_data_offset = 24, .mod_data_len = 20, .mod_data_type = UPP_DATA_TYPE_STRING,
        .data_len = 20, .data_type = UPP_DATA_TYPE_STRING, .sig_id = PARAM_CLIENT_CODE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (205), .dec_p = 1
    },

    /* 机器型号编码（Excel 第 5 行） */
    {
        .mod_data_offset = 94, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = PARAM_TYPE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (205), .dec_p = 1
    },

    /* 设备类型编码（Excel 第 6 行） */
    {
        .mod_data_offset = 96, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = PARAM_MATRIL_CODE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (205), .dec_p = 1
    },

    /* 序列号（Excel 第 7 行） */
    {
        .mod_data_offset = 62, .mod_data_len = 20, .mod_data_type = UPP_DATA_TYPE_STRING,
        .data_len = 20, .data_type = UPP_DATA_TYPE_STRING, .sig_id = PARAM_VEHICLE_TYPE,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (205), .dec_p = 1
    },

};


const UPP_M_MOD_DATA g_dsp_upp_collect_99[] = {

    /* DCDC任务级故障字1（Excel 第 8 行） */
    {
        .mod_data_offset = 6, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = DCDC_TSK_FW_FLT_FLG1,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* DCDC任务级故障字2（Excel 第 9 行） */
    {
        .mod_data_offset = 8, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = DCDC_TSK_FW_FLT_FLG2,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* DCDC任务级故障字3（Excel 第 10 行） */
    {
        .mod_data_offset = 10, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = DCDC_TSK_FW_FLT_FLG3,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* DCDC任务级故障字4（Excel 第 11 行） */
    {
        .mod_data_offset = 12, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = DCDC_TSK_FW_FLT_FLG4,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* DCDC任务级告警字1（Excel 第 12 行） */
    {
        .mod_data_offset = 14, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = DCDC_TSK_WARN_FLT_FLG1,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* DCDC任务级告警字2（Excel 第 13 行） */
    {
        .mod_data_offset = 16, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = DCDC_TSK_WARN_FLT_FLG2,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* DCDC任务级告警字3（Excel 第 14 行） */
    {
        .mod_data_offset = 18, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = DCDC_TSK_WARN_FLT_FLG3,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 主状态机工作模式（Excel 第 15 行） */
    {
        .mod_data_offset = 20, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = MAIN_WRK_MODE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 不控整流输出侧预充继电器闭合指令（Excel 第 16 行） */
    {
        .mod_data_offset = 22, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30000,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出侧预充继电器闭合指令（Excel 第 17 行） */
    {
        .mod_data_offset = 24, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30001,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 输出侧预充继电器闭合指令（Excel 第 18 行） */
    {
        .mod_data_offset = 26, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30002,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Cell类型（Excel 第 19 行） */
    {
        .mod_data_offset = 28, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30003,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC中断负载运行总时间（Excel 第 20 行） */
    {
        .mod_data_offset = 30, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30004,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* RECT1温度降额系数输出值（Excel 第 21 行） */
    {
        .mod_data_offset = 34, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30005,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* RECT2温度降额系数输出值（Excel 第 22 行） */
    {
        .mod_data_offset = 38, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30006,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* BST温度降额系数输出值（Excel 第 23 行） */
    {
        .mod_data_offset = 42, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30007,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* BUCK温度降额系数输出值（Excel 第 24 行） */
    {
        .mod_data_offset = 46, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30008,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 环境温度降额系数输出值（Excel 第 25 行） */
    {
        .mod_data_offset = 50, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30009,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 输出过载降额系数输出值（Excel 第 26 行） */
    {
        .mod_data_offset = 54, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30010,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 总降额系数输出值（Excel 第 27 行） */
    {
        .mod_data_offset = 58, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30011,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 降额模块输出限流值（Excel 第 28 行） */
    {
        .mod_data_offset = 62, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30012,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* RECT1采样温度（Excel 第 29 行） */
    {
        .mod_data_offset = 66, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30013,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* RECT2采样温度（Excel 第 30 行） */
    {
        .mod_data_offset = 70, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30014,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* BST采样温度（Excel 第 31 行） */
    {
        .mod_data_offset = 74, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30015,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* BUCK采样温度（Excel 第 32 行） */
    {
        .mod_data_offset = 78, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30016,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 环境采样温度（Excel 第 33 行） */
    {
        .mod_data_offset = 82, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30017,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型观测信号1（Excel 第 34 行） */
    {
        .mod_data_offset = 86, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30018,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型观测信号2（Excel 第 35 行） */
    {
        .mod_data_offset = 88, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30019,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型观测信号3（Excel 第 36 行） */
    {
        .mod_data_offset = 90, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30020,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型观测信号4（Excel 第 37 行） */
    {
        .mod_data_offset = 92, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30021,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型观测信号5（Excel 第 38 行） */
    {
        .mod_data_offset = 94, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30022,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型观测信号6（Excel 第 39 行） */
    {
        .mod_data_offset = 96, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30023,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型观测信号7（Excel 第 40 行） */
    {
        .mod_data_offset = 98, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30024,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型观测信号8（Excel 第 41 行） */
    {
        .mod_data_offset = 100, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30025,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型观测信号9（Excel 第 42 行） */
    {
        .mod_data_offset = 102, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30026,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型观测信号10（Excel 第 43 行） */
    {
        .mod_data_offset = 104, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30027,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点观测信号1（Excel 第 44 行） */
    {
        .mod_data_offset = 106, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30028,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点观测信号2（Excel 第 45 行） */
    {
        .mod_data_offset = 110, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30029,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点观测信号3（Excel 第 46 行） */
    {
        .mod_data_offset = 114, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30030,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点观测信号4（Excel 第 47 行） */
    {
        .mod_data_offset = 118, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30031,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点观测信号5（Excel 第 48 行） */
    {
        .mod_data_offset = 122, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30032,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点观测信号6（Excel 第 49 行） */
    {
        .mod_data_offset = 126, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30033,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点观测信号7（Excel 第 50 行） */
    {
        .mod_data_offset = 130, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30034,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点观测信号8（Excel 第 51 行） */
    {
        .mod_data_offset = 134, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30035,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点观测信号9（Excel 第 52 行） */
    {
        .mod_data_offset = 138, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30036,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点观测信号10（Excel 第 53 行） */
    {
        .mod_data_offset = 142, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30037,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

};


const UPP_M_MOD_DATA g_dsp_upp_collect_100[] = {

    /* 风扇1转速（Excel 第 54 行） */
    {
        .mod_data_offset = 6, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = U16_FAN_SPEED1,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 风扇2转速（Excel 第 55 行） */
    {
        .mod_data_offset = 8, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = U16_FAN_SPEED2,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 风扇3转速（Excel 第 56 行） */
    {
        .mod_data_offset = 10, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = U16_FAN_SPEED3,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 整流Rect1电压（Excel 第 57 行） */
    {
        .mod_data_offset = 12, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = F32_RECT1_VOL,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 电网L-R to L-S线电压线电压（Excel 第 58 行） */
    {
        .mod_data_offset = 16, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = F32_LINE_VOL_RTO_S,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 电网L-S to L-T线电压线电压（Excel 第 59 行） */
    {
        .mod_data_offset = 20, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = F32_LINE_VOL_STO_T,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 电网R相电压（Excel 第 60 行） */
    {
        .mod_data_offset = 24, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = F32_PHASE_VOL_R,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 电网S相电压（Excel 第 61 行） */
    {
        .mod_data_offset = 28, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = F32_PHASE_VOL_S,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 电网T相电压（Excel 第 62 行） */
    {
        .mod_data_offset = 32, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = F32_PHASE_VOL_T,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* Boost输出母线电压（Excel 第 63 行） */
    {
        .mod_data_offset = 36, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = F32_BOOST_BUS_VOL,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* Buck输出电压（Excel 第 64 行） */
    {
        .mod_data_offset = 40, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = F32_OUTPUT_VOL,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 电池电压（Excel 第 65 行） */
    {
        .mod_data_offset = 44, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = F32_BAT_VOL,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* Buck输出电流（Excel 第 66 行） */
    {
        .mod_data_offset = 48, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = F32_OUTPUT_CURR,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 中断故障字1（Excel 第 67 行） */
    {
        .mod_data_offset = 52, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = U16_INT_FAULT_WORD1,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 中断故障字2（Excel 第 68 行） */
    {
        .mod_data_offset = 54, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = U16_INT_FAULT_WORD2,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 中断告警字1（Excel 第 69 行） */
    {
        .mod_data_offset = 56, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = U16_INT_WARN_WORD1,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 中断告警字2（Excel 第 70 行） */
    {
        .mod_data_offset = 58, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = U16_INT_WARN_WORD2,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* Boost状态机工作状态（Excel 第 71 行） */
    {
        .mod_data_offset = 60, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = U16_BOOST_WRK_MODE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* Boost1电感电流（Excel 第 72 行） */
    {
        .mod_data_offset = 62, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30038,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost2电感电流（Excel 第 73 行） */
    {
        .mod_data_offset = 66, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30039,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost3电感电流（Excel 第 74 行） */
    {
        .mod_data_offset = 70, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30040,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost4电感电流（Excel 第 75 行） */
    {
        .mod_data_offset = 74, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30041,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck1电感电流（Excel 第 76 行） */
    {
        .mod_data_offset = 78, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30042,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck2电感电流（Excel 第 77 行） */
    {
        .mod_data_offset = 82, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30043,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck3电感电流（Excel 第 78 行） */
    {
        .mod_data_offset = 86, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30044,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck4电感电流（Excel 第 79 行） */
    {
        .mod_data_offset = 90, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30045,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环积分环节调节量（Excel 第 80 行） */
    {
        .mod_data_offset = 94, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30046,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环比例环节调节量（Excel 第 81 行） */
    {
        .mod_data_offset = 98, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30047,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环PI输出（Excel 第 82 行） */
    {
        .mod_data_offset = 102, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30048,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网R相电压锁相角度（Excel 第 83 行） */
    {
        .mod_data_offset = 106, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30049,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环锁相频率（Excel 第 84 行） */
    {
        .mod_data_offset = 110, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30050,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环D轴输出量（Excel 第 85 行） */
    {
        .mod_data_offset = 114, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30051,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost状态机输出的Buck工作使能（Excel 第 86 行） */
    {
        .mod_data_offset = 118, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30052,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 晶闸管工作使能（Excel 第 87 行） */
    {
        .mod_data_offset = 120, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30053,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池IGBT使能（Excel 第 88 行） */
    {
        .mod_data_offset = 122, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30054,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost缓启参考电压指令值输入（Excel 第 89 行） */
    {
        .mod_data_offset = 124, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30055,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost实际执行的参考电压（Excel 第 90 行） */
    {
        .mod_data_offset = 128, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30056,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost缓启完成标志标志位（Excel 第 91 行） */
    {
        .mod_data_offset = 132, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30057,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环积分环节调节量（Excel 第 92 行） */
    {
        .mod_data_offset = 134, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30058,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环比例环节调节量（Excel 第 93 行） */
    {
        .mod_data_offset = 138, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30059,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环电流前馈量（Excel 第 94 行） */
    {
        .mod_data_offset = 142, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30060,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环输出（Excel 第 95 行） */
    {
        .mod_data_offset = 146, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30061,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck状态机工作状态（Excel 第 96 行） */
    {
        .mod_data_offset = 150, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30062,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck环启参考电压指令值输入（Excel 第 97 行） */
    {
        .mod_data_offset = 152, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30063,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck实际执行的参考电压（Excel 第 98 行） */
    {
        .mod_data_offset = 156, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30064,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck缓启完成标志标志位（Excel 第 99 行） */
    {
        .mod_data_offset = 160, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30065,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck参考电压下垂量（Excel 第 100 行） */
    {
        .mod_data_offset = 162, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30066,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck均流PI调节量（Excel 第 101 行） */
    {
        .mod_data_offset = 166, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30067,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck下垂偏移矫正调节量（Excel 第 102 行） */
    {
        .mod_data_offset = 170, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30068,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck下垂均流后参考电压（Excel 第 103 行） */
    {
        .mod_data_offset = 174, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30069,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环积分环节调节量（Excel 第 104 行） */
    {
        .mod_data_offset = 178, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30070,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环比例环节调节量（Excel 第 105 行） */
    {
        .mod_data_offset = 182, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30071,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环电流前馈量（Excel 第 106 行） */
    {
        .mod_data_offset = 186, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30072,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环输出量（Excel 第 107 行） */
    {
        .mod_data_offset = 190, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30073,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电流环参考（Excel 第 108 行） */
    {
        .mod_data_offset = 194, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30074,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电流环积分环节调节量（Excel 第 109 行） */
    {
        .mod_data_offset = 198, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30075,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电流环比例环节调节量（Excel 第 110 行） */
    {
        .mod_data_offset = 202, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30076,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电流环输出量（Excel 第 111 行） */
    {
        .mod_data_offset = 206, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30077,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电路总输出（Excel 第 112 行） */
    {
        .mod_data_offset = 210, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30078,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC中断负载运行总时间（Excel 第 113 行） */
    {
        .mod_data_offset = 214, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30079,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号1（Excel 第 114 行） */
    {
        .mod_data_offset = 218, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30080,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号2（Excel 第 115 行） */
    {
        .mod_data_offset = 220, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30081,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号3（Excel 第 116 行） */
    {
        .mod_data_offset = 222, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30082,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号4（Excel 第 117 行） */
    {
        .mod_data_offset = 224, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30083,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号5（Excel 第 118 行） */
    {
        .mod_data_offset = 226, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30084,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号6（Excel 第 119 行） */
    {
        .mod_data_offset = 228, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30085,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号7（Excel 第 120 行） */
    {
        .mod_data_offset = 230, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30086,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号8（Excel 第 121 行） */
    {
        .mod_data_offset = 232, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30087,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号9（Excel 第 122 行） */
    {
        .mod_data_offset = 234, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30088,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号10（Excel 第 123 行） */
    {
        .mod_data_offset = 236, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30089,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号11（Excel 第 124 行） */
    {
        .mod_data_offset = 238, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30090,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号12（Excel 第 125 行） */
    {
        .mod_data_offset = 240, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30091,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号13（Excel 第 126 行） */
    {
        .mod_data_offset = 242, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30092,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号14（Excel 第 127 行） */
    {
        .mod_data_offset = 244, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30093,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号15（Excel 第 128 行） */
    {
        .mod_data_offset = 246, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30094,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号16（Excel 第 129 行） */
    {
        .mod_data_offset = 248, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30095,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号17（Excel 第 130 行） */
    {
        .mod_data_offset = 250, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30096,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号18（Excel 第 131 行） */
    {
        .mod_data_offset = 252, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30097,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号19（Excel 第 132 行） */
    {
        .mod_data_offset = 254, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30098,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断整型观测信号20（Excel 第 133 行） */
    {
        .mod_data_offset = 256, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30099,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号1（Excel 第 134 行） */
    {
        .mod_data_offset = 258, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30100,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号2（Excel 第 135 行） */
    {
        .mod_data_offset = 262, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30101,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号3（Excel 第 136 行） */
    {
        .mod_data_offset = 266, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30102,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号4（Excel 第 137 行） */
    {
        .mod_data_offset = 270, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30103,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号5（Excel 第 138 行） */
    {
        .mod_data_offset = 274, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30104,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号6（Excel 第 139 行） */
    {
        .mod_data_offset = 278, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30105,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号7（Excel 第 140 行） */
    {
        .mod_data_offset = 282, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30106,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号8（Excel 第 141 行） */
    {
        .mod_data_offset = 286, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30107,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号9（Excel 第 142 行） */
    {
        .mod_data_offset = 290, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30108,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号10（Excel 第 143 行） */
    {
        .mod_data_offset = 294, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30109,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号11（Excel 第 144 行） */
    {
        .mod_data_offset = 298, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30110,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号12（Excel 第 145 行） */
    {
        .mod_data_offset = 302, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30111,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号13（Excel 第 146 行） */
    {
        .mod_data_offset = 306, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30112,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号14（Excel 第 147 行） */
    {
        .mod_data_offset = 310, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30113,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号15（Excel 第 148 行） */
    {
        .mod_data_offset = 314, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30114,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号16（Excel 第 149 行） */
    {
        .mod_data_offset = 318, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30115,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号17（Excel 第 150 行） */
    {
        .mod_data_offset = 322, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30116,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号18（Excel 第 151 行） */
    {
        .mod_data_offset = 326, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30117,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号19（Excel 第 152 行） */
    {
        .mod_data_offset = 330, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30118,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC自定义中断浮点观测信号20（Excel 第 153 行） */
    {
        .mod_data_offset = 334, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30119,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

};


const UPP_M_MOD_DATA g_dsp_upp_collect_102[] = {

    /* 主控板单Cell工作指令（Excel 第 154 行） */
    {
        .mod_data_offset = 6, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = ARM_COM_CELL_WORK_CMD,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 主控板Buck工作电压指令（Excel 第 155 行） */
    {
        .mod_data_offset = 8, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = ARM_COMT_BUCK_VOL_CMD,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 主控板Boost工作电压指令（Excel 第 156 行） */
    {
        .mod_data_offset = 12, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = ARM_COM_BOOST_VOL_CMD,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 主控板限流值（Excel 第 157 行） */
    {
        .mod_data_offset = 16, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = ARM_COM_CURR_LMT,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 主控板平均电流（Excel 第 158 行） */
    {
        .mod_data_offset = 20, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = ARM_AVERAGE_CURR,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 主控板平均电压（Excel 第 159 行） */
    {
        .mod_data_offset = 24, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = ARM_AVERAGE_VOL,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 主控板强制电池工作使能（Excel 第 160 行） */
    {
        .mod_data_offset = 28, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = ARM_COM_FORCE_BAT_WRK_EN,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* SN号写使能（Excel 第 161 行） */
    {
        .mod_data_offset = 30, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30120,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 采样系数和偏置校正使能（Excel 第 162 行） */
    {
        .mod_data_offset = 32, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30121,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 采样系数和偏置清除使能（Excel 第 163 行） */
    {
        .mod_data_offset = 34, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30122,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 上位机DC系统运行模式设置（Excel 第 164 行） */
    {
        .mod_data_offset = 36, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30123,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DC闭环运行使能（Excel 第 165 行） */
    {
        .mod_data_offset = 38, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30124,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost开环运行使能（Excel 第 166 行） */
    {
        .mod_data_offset = 40, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30125,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck开环运行使能（Excel 第 167 行） */
    {
        .mod_data_offset = 42, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30126,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 下垂功能使能（Excel 第 168 行） */
    {
        .mod_data_offset = 44, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30127,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 故障复位使能（Excel 第 169 行） */
    {
        .mod_data_offset = 46, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30128,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* PCBoostC开环占空比给定（Excel 第 170 行） */
    {
        .mod_data_offset = 48, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30129,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* PCBuckC开环占空比给定（Excel 第 171 行） */
    {
        .mod_data_offset = 52, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30130,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* PCBoost输出电压设定（Excel 第 172 行） */
    {
        .mod_data_offset = 56, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30131,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* PCBuck输出电压设定（Excel 第 173 行） */
    {
        .mod_data_offset = 60, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30132,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* PCBuck限流值设定（Excel 第 174 行） */
    {
        .mod_data_offset = 64, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30133,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* PCBuck均流值设定（Excel 第 175 行） */
    {
        .mod_data_offset = 68, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30134,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* PC强制电池工作使能（Excel 第 176 行） */
    {
        .mod_data_offset = 72, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30135,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 风扇转速手动控制使能（Excel 第 177 行） */
    {
        .mod_data_offset = 74, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30136,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 风扇转速手动控制参考值（Excel 第 178 行） */
    {
        .mod_data_offset = 76, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30137,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 通用插桩信号1（Excel 第 179 行） */
    {
        .mod_data_offset = 78, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30138,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 通用插桩信号2（Excel 第 180 行） */
    {
        .mod_data_offset = 80, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30139,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 通用插桩信号3（Excel 第 181 行） */
    {
        .mod_data_offset = 82, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30140,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 通用插桩信号4（Excel 第 182 行） */
    {
        .mod_data_offset = 84, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30141,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 通用插桩信号5（Excel 第 183 行） */
    {
        .mod_data_offset = 86, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30142,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 通用插桩信号6（Excel 第 184 行） */
    {
        .mod_data_offset = 88, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30143,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 通用插桩信号7（Excel 第 185 行） */
    {
        .mod_data_offset = 90, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30144,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 通用插桩信号8（Excel 第 186 行） */
    {
        .mod_data_offset = 92, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30145,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 通用插桩信号9（Excel 第 187 行） */
    {
        .mod_data_offset = 94, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30146,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 通用插桩信号10（Excel 第 188 行） */
    {
        .mod_data_offset = 96, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30147,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* CPU中断执行时间观测使能（Excel 第 189 行） */
    {
        .mod_data_offset = 98, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30148,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

};


const UPP_M_MOD_DATA g_dsp_upp_collect_103[] = {

    /* AC切电池欠压阈值（Excel 第 190 行） */
    {
        .mod_data_offset = 6, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = AC2_BAT_LOW_THRESH,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* AC切电池过压阈值（Excel 第 191 行） */
    {
        .mod_data_offset = 10, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = AC2_BAT_HIGH_THRESH,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 电网频率（Excel 第 192 行） */
    {
        .mod_data_offset = 14, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = GRID_FREQUENCY,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 海拔默认值（Excel 第 193 行） */
    {
        .mod_data_offset = 18, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = ALTITUDE_DEFAULT,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (3), .dec_p = 1
    },

    /* 不控整流输出继电器吸合电压阈值（Excel 第 194 行） */
    {
        .mod_data_offset = 22, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30149,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost母线继电器吸合电压阈值（Excel 第 195 行） */
    {
        .mod_data_offset = 26, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30150,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环比例系数（Excel 第 196 行） */
    {
        .mod_data_offset = 30, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30151,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环积分系数（Excel 第 197 行） */
    {
        .mod_data_offset = 34, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30152,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环积分上限（Excel 第 198 行） */
    {
        .mod_data_offset = 38, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30153,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环积分下限（Excel 第 199 行） */
    {
        .mod_data_offset = 42, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30154,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环输出上限（Excel 第 200 行） */
    {
        .mod_data_offset = 46, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30155,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 锁相环输出下限（Excel 第 201 行） */
    {
        .mod_data_offset = 50, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30156,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压软起步长（Excel 第 202 行） */
    {
        .mod_data_offset = 54, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30157,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压软起步长（Excel 第 203 行） */
    {
        .mod_data_offset = 58, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30158,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环Kp（Excel 第 204 行） */
    {
        .mod_data_offset = 62, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30159,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环Ki（Excel 第 205 行） */
    {
        .mod_data_offset = 66, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30160,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环电流前馈系数（Excel 第 206 行） */
    {
        .mod_data_offset = 70, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30161,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环积分上限（Excel 第 207 行） */
    {
        .mod_data_offset = 74, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30162,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环积分下限（Excel 第 208 行） */
    {
        .mod_data_offset = 78, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30163,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环输出上限（Excel 第 209 行） */
    {
        .mod_data_offset = 82, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30164,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环输出下限（Excel 第 210 行） */
    {
        .mod_data_offset = 86, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30165,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环误差上限（Excel 第 211 行） */
    {
        .mod_data_offset = 90, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30166,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电压环误差下限（Excel 第 212 行） */
    {
        .mod_data_offset = 94, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30167,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环Kp（Excel 第 213 行） */
    {
        .mod_data_offset = 98, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30168,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环Ki（Excel 第 214 行） */
    {
        .mod_data_offset = 102, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30169,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电流环Kp（Excel 第 215 行） */
    {
        .mod_data_offset = 106, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30170,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电流环Ki（Excel 第 216 行） */
    {
        .mod_data_offset = 110, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30171,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 800V输出限流基准值（Excel 第 217 行） */
    {
        .mod_data_offset = 114, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30172,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 400V输出限流基准值（Excel 第 218 行） */
    {
        .mod_data_offset = 118, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30173,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 270V输出限流基准值（Excel 第 219 行） */
    {
        .mod_data_offset = 122, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30174,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环电流前馈系数（Excel 第 220 行） */
    {
        .mod_data_offset = 126, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30175,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环积分上限（Excel 第 221 行） */
    {
        .mod_data_offset = 130, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30176,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环积分下限（Excel 第 222 行） */
    {
        .mod_data_offset = 134, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30177,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环输出上限（Excel 第 223 行） */
    {
        .mod_data_offset = 138, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30178,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环输出下限（Excel 第 224 行） */
    {
        .mod_data_offset = 142, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30179,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环误差上限（Excel 第 225 行） */
    {
        .mod_data_offset = 146, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30180,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压环误差下限（Excel 第 226 行） */
    {
        .mod_data_offset = 150, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30181,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压电流下垂系数（Excel 第 227 行） */
    {
        .mod_data_offset = 154, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30182,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压电流下垂输出上限（Excel 第 228 行） */
    {
        .mod_data_offset = 158, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30183,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电压电流下垂输出下限（Excel 第 229 行） */
    {
        .mod_data_offset = 162, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30184,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck并机均流Kp（Excel 第 230 行） */
    {
        .mod_data_offset = 166, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30185,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck并机均流Ki（Excel 第 231 行） */
    {
        .mod_data_offset = 170, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30186,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck均流积分上限（Excel 第 232 行） */
    {
        .mod_data_offset = 174, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30187,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck均流积分下限（Excel 第 233 行） */
    {
        .mod_data_offset = 178, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30188,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck均流输出上限（Excel 第 234 行） */
    {
        .mod_data_offset = 182, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30189,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck均流输出下限（Excel 第 235 行） */
    {
        .mod_data_offset = 186, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30190,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电流环积分上限（Excel 第 236 行） */
    {
        .mod_data_offset = 190, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30191,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电流环积分下限（Excel 第 237 行） */
    {
        .mod_data_offset = 194, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30192,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电流环输出上限（Excel 第 238 行） */
    {
        .mod_data_offset = 198, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30193,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电流环输出下限（Excel 第 239 行） */
    {
        .mod_data_offset = 202, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30194,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 风扇转速闭环Kp（Excel 第 240 行） */
    {
        .mod_data_offset = 206, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30195,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 风扇转速闭环Ki（Excel 第 241 行） */
    {
        .mod_data_offset = 210, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30196,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 风扇转速闭环前馈Kforward（Excel 第 242 行） */
    {
        .mod_data_offset = 214, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30197,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 交流侧有效值过压恢复阈值（Excel 第 243 行） */
    {
        .mod_data_offset = 218, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30198,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 交流侧有效值过压保护阈值（Excel 第 244 行） */
    {
        .mod_data_offset = 222, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30199,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 交流侧有效值过压触发计数步长（Excel 第 245 行） */
    {
        .mod_data_offset = 226, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30200,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 交流侧有效值过压触发计数阈值（Excel 第 246 行） */
    {
        .mod_data_offset = 228, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30201,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 交流侧有效值欠压保护阈值（Excel 第 247 行） */
    {
        .mod_data_offset = 230, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30202,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 交流侧有效值欠压恢复阈值（Excel 第 248 行） */
    {
        .mod_data_offset = 234, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30203,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 交流侧有效值欠压触发计数步长（Excel 第 249 行） */
    {
        .mod_data_offset = 238, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30204,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 交流侧有效值欠压触发计数阈值（Excel 第 250 行） */
    {
        .mod_data_offset = 240, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30205,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网缺相保护阈值（Excel 第 251 行） */
    {
        .mod_data_offset = 242, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30206,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网缺相恢复阈值（Excel 第 252 行） */
    {
        .mod_data_offset = 246, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30207,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网缺相触发计数步长（Excel 第 253 行） */
    {
        .mod_data_offset = 250, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30208,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网缺相触发计数阈值（Excel 第 254 行） */
    {
        .mod_data_offset = 252, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30209,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网过频保护阈值（Excel 第 255 行） */
    {
        .mod_data_offset = 254, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30210,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网过频恢复阈值（Excel 第 256 行） */
    {
        .mod_data_offset = 258, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30211,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网过频触发计数步长（Excel 第 257 行） */
    {
        .mod_data_offset = 262, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30212,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网过频触发计数阈值（Excel 第 258 行） */
    {
        .mod_data_offset = 264, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30213,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网欠频保护阈值（Excel 第 259 行） */
    {
        .mod_data_offset = 266, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30214,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网欠频恢复阈值（Excel 第 260 行） */
    {
        .mod_data_offset = 270, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30215,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网欠频触发计数步长（Excel 第 261 行） */
    {
        .mod_data_offset = 274, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30216,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网欠频触发计数阈值（Excel 第 262 行） */
    {
        .mod_data_offset = 276, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30217,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电感软件过流恢复阈值（Excel 第 263 行） */
    {
        .mod_data_offset = 278, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30218,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电感软件过流保护阈值（Excel 第 264 行） */
    {
        .mod_data_offset = 282, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30219,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电感软件过流保护触发计数值（Excel 第 265 行） */
    {
        .mod_data_offset = 286, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30220,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电感软件过流保护计数步长（Excel 第 266 行） */
    {
        .mod_data_offset = 288, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30221,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电感硬件过流保护触发计数值（Excel 第 267 行） */
    {
        .mod_data_offset = 290, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30222,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost电感硬件过流保护计数步长（Excel 第 268 行） */
    {
        .mod_data_offset = 292, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30223,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出电压硬件过压触发计数值（Excel 第 269 行） */
    {
        .mod_data_offset = 294, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30224,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出电压硬件过压计数步长（Excel 第 270 行） */
    {
        .mod_data_offset = 296, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30225,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电感软件过流恢复阈值（Excel 第 271 行） */
    {
        .mod_data_offset = 298, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30226,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电感软件过流保护阈值（Excel 第 272 行） */
    {
        .mod_data_offset = 302, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30227,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电感软件过流保护触发计数值（Excel 第 273 行） */
    {
        .mod_data_offset = 306, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30228,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电感软件过流保护计数步长（Excel 第 274 行） */
    {
        .mod_data_offset = 308, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30229,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电感硬件过流保护触发计数值（Excel 第 275 行） */
    {
        .mod_data_offset = 310, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30230,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck电感硬件过流保护计数步长（Excel 第 276 行） */
    {
        .mod_data_offset = 312, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30231,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出电压硬件过压触发计数值（Excel 第 277 行） */
    {
        .mod_data_offset = 314, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30232,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出电压硬件过压计数步长（Excel 第 278 行） */
    {
        .mod_data_offset = 316, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30233,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出软件过流恢复阈值（Excel 第 279 行） */
    {
        .mod_data_offset = 318, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30234,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出软件过流保护阈值（Excel 第 280 行） */
    {
        .mod_data_offset = 322, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30235,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出软件过流触发计数步长（Excel 第 281 行） */
    {
        .mod_data_offset = 326, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30236,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出软件过流保护触发计数值（Excel 第 282 行） */
    {
        .mod_data_offset = 328, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30237,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.25倍输出过载恢复系数（Excel 第 283 行） */
    {
        .mod_data_offset = 330, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30238,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.25倍输出过载保护系数（Excel 第 284 行） */
    {
        .mod_data_offset = 334, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30239,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.25倍输出过载触发计数步长（Excel 第 285 行） */
    {
        .mod_data_offset = 338, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30240,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.25倍输出过载触发计数阈值（Excel 第 286 行） */
    {
        .mod_data_offset = 340, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30241,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.5倍输出过载恢复系数（Excel 第 287 行） */
    {
        .mod_data_offset = 342, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30242,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.5倍输出过载保护系数（Excel 第 288 行） */
    {
        .mod_data_offset = 346, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30243,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.5倍输出过载触发计数步长（Excel 第 289 行） */
    {
        .mod_data_offset = 350, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30244,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.5倍输出过载触发计数阈值（Excel 第 290 行） */
    {
        .mod_data_offset = 352, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30245,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.65倍输出过载恢复系数（Excel 第 291 行） */
    {
        .mod_data_offset = 354, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30246,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.65倍输出过载保护系数（Excel 第 292 行） */
    {
        .mod_data_offset = 358, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30247,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.65倍输出过载触发计数步长（Excel 第 293 行） */
    {
        .mod_data_offset = 362, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30248,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 1.65倍输出过载触发计数阈值（Excel 第 294 行） */
    {
        .mod_data_offset = 364, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30249,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Rect输出母线过压保护阈值（Excel 第 295 行） */
    {
        .mod_data_offset = 366, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30250,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Rect输出母线过压恢复阈值（Excel 第 296 行） */
    {
        .mod_data_offset = 370, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30251,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Rect输出母线过压触发计数步长（Excel 第 297 行） */
    {
        .mod_data_offset = 374, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30252,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Rect输出母线过压触发计数阈值（Excel 第 298 行） */
    {
        .mod_data_offset = 376, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30253,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Rect输出母线欠压保护阈值（Excel 第 299 行） */
    {
        .mod_data_offset = 378, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30254,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Rect输出母线欠压恢复阈值（Excel 第 300 行） */
    {
        .mod_data_offset = 382, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30255,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Rect输出母线欠压触发计数步长（Excel 第 301 行） */
    {
        .mod_data_offset = 386, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30256,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Rect输出母线欠压触发计数阈值（Excel 第 302 行） */
    {
        .mod_data_offset = 388, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30257,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线过压保护阈值（Excel 第 303 行） */
    {
        .mod_data_offset = 390, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30258,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线过压恢复阈值（Excel 第 304 行） */
    {
        .mod_data_offset = 394, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30259,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线过压触发计数步长（Excel 第 305 行） */
    {
        .mod_data_offset = 398, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30260,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线过压触发计数阈值（Excel 第 306 行） */
    {
        .mod_data_offset = 400, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30261,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线欠压保护阈值（Excel 第 307 行） */
    {
        .mod_data_offset = 402, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30262,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线欠压恢复阈值（Excel 第 308 行） */
    {
        .mod_data_offset = 406, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30263,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线欠压触发计数步长（Excel 第 309 行） */
    {
        .mod_data_offset = 410, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30264,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线欠压触发计数阈值（Excel 第 310 行） */
    {
        .mod_data_offset = 412, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30265,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出母线过压保护阈值（Excel 第 311 行） */
    {
        .mod_data_offset = 414, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30266,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出母线过压恢复阈值（Excel 第 312 行） */
    {
        .mod_data_offset = 418, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30267,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出母线过压触发计数步长（Excel 第 313 行） */
    {
        .mod_data_offset = 422, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30268,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出母线过压触发计数阈值（Excel 第 314 行） */
    {
        .mod_data_offset = 424, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30269,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出母线欠压保护阈值（Excel 第 315 行） */
    {
        .mod_data_offset = 426, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30270,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出母线欠压恢复阈值（Excel 第 316 行） */
    {
        .mod_data_offset = 430, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30271,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出母线欠压触发计数步长（Excel 第 317 行） */
    {
        .mod_data_offset = 434, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30272,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出母线欠压触发计数阈值（Excel 第 318 行） */
    {
        .mod_data_offset = 436, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30273,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压过压保护阈值（Excel 第 319 行） */
    {
        .mod_data_offset = 438, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30274,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压过压恢复阈值（Excel 第 320 行） */
    {
        .mod_data_offset = 442, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30275,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压过压触发计数步长（Excel 第 321 行） */
    {
        .mod_data_offset = 446, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30276,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压过压触发计数阈值（Excel 第 322 行） */
    {
        .mod_data_offset = 448, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30277,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压欠压保护阈值（Excel 第 323 行） */
    {
        .mod_data_offset = 450, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30278,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压欠压恢复阈值（Excel 第 324 行） */
    {
        .mod_data_offset = 454, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30279,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压欠压触发计数步长（Excel 第 325 行） */
    {
        .mod_data_offset = 458, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30280,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压欠压触发计数阈值（Excel 第 326 行） */
    {
        .mod_data_offset = 460, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30281,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 预充超时触发计数阈值（Excel 第 327 行） */
    {
        .mod_data_offset = 462, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30282,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 交流侧电流警告最大偏置（Excel 第 328 行） */
    {
        .mod_data_offset = 464, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30283,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 交流侧电流警告最小偏置（Excel 第 329 行） */
    {
        .mod_data_offset = 468, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30284,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电感电流警告最大偏置量（Excel 第 330 行） */
    {
        .mod_data_offset = 472, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30285,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电感电流警告最小偏置量（Excel 第 331 行） */
    {
        .mod_data_offset = 476, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30286,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 整流Rect1电压初始采样系数（Excel 第 332 行） */
    {
        .mod_data_offset = 480, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30287,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网L-R to L-S线电压线电压初始采样系数（Excel 第 333 行） */
    {
        .mod_data_offset = 484, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30288,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网L-S to L-T线电压线电压初始采样系数（Excel 第 334 行） */
    {
        .mod_data_offset = 488, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30289,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线电压初始采样系数（Excel 第 335 行） */
    {
        .mod_data_offset = 492, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30290,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出电压电压初始采样系数（Excel 第 336 行） */
    {
        .mod_data_offset = 496, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30291,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压初始采样系数（Excel 第 337 行） */
    {
        .mod_data_offset = 500, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30292,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost1电感电流初始采样系数（Excel 第 338 行） */
    {
        .mod_data_offset = 504, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30293,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost2电感电流初始采样系数（Excel 第 339 行） */
    {
        .mod_data_offset = 508, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30294,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost3电感电流初始采样系数（Excel 第 340 行） */
    {
        .mod_data_offset = 512, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30295,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost4电感电流初始采样系数（Excel 第 341 行） */
    {
        .mod_data_offset = 516, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30296,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck1电感电流初始采样系数（Excel 第 342 行） */
    {
        .mod_data_offset = 520, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30297,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck2电感电流初始采样系数（Excel 第 343 行） */
    {
        .mod_data_offset = 524, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30298,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck3电感电流初始采样系数（Excel 第 344 行） */
    {
        .mod_data_offset = 528, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30299,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck4电感电流初始采样系数（Excel 第 345 行） */
    {
        .mod_data_offset = 532, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30300,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出电流初始采样系数（Excel 第 346 行） */
    {
        .mod_data_offset = 536, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30301,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 整流Rect1电压偏移量（Excel 第 347 行） */
    {
        .mod_data_offset = 540, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30302,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网L-R to L-S线电压线电压初始偏移量（Excel 第 348 行） */
    {
        .mod_data_offset = 544, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30303,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网L-S to L-T线电压线电压初始偏移量（Excel 第 349 行） */
    {
        .mod_data_offset = 548, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30304,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线电压初始偏移量（Excel 第 350 行） */
    {
        .mod_data_offset = 552, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30305,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出电压电压初始偏移量（Excel 第 351 行） */
    {
        .mod_data_offset = 556, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30306,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压初始偏移量（Excel 第 352 行） */
    {
        .mod_data_offset = 560, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30307,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost1电感电流初始偏移量（Excel 第 353 行） */
    {
        .mod_data_offset = 564, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30308,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost2电感电流初始偏移量（Excel 第 354 行） */
    {
        .mod_data_offset = 568, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30309,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost3电感电流初始偏移量（Excel 第 355 行） */
    {
        .mod_data_offset = 572, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30310,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost4电感电流初始偏移量（Excel 第 356 行） */
    {
        .mod_data_offset = 576, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30311,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck1电感电流初始偏移量（Excel 第 357 行） */
    {
        .mod_data_offset = 580, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30312,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck2电感电流初始偏移量（Excel 第 358 行） */
    {
        .mod_data_offset = 584, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30313,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck3电感电流初始偏移量（Excel 第 359 行） */
    {
        .mod_data_offset = 588, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30314,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck4电感电流初始偏移量（Excel 第 360 行） */
    {
        .mod_data_offset = 592, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30315,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出电流初始偏移量（Excel 第 361 行） */
    {
        .mod_data_offset = 596, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30316,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC中断故障1屏蔽字（Excel 第 362 行） */
    {
        .mod_data_offset = 600, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30317,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC中断故障2屏蔽字（Excel 第 363 行） */
    {
        .mod_data_offset = 602, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30318,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC中断警告1屏蔽字（Excel 第 364 行） */
    {
        .mod_data_offset = 604, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30319,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC中断警告2屏蔽字（Excel 第 365 行） */
    {
        .mod_data_offset = 606, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30320,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC任务故障1屏蔽字（Excel 第 366 行） */
    {
        .mod_data_offset = 608, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30321,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC任务故障2屏蔽字（Excel 第 367 行） */
    {
        .mod_data_offset = 610, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30322,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC任务故障3屏蔽字（Excel 第 368 行） */
    {
        .mod_data_offset = 612, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30323,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC任务故障4屏蔽字（Excel 第 369 行） */
    {
        .mod_data_offset = 614, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30324,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC任务警告1屏蔽字（Excel 第 370 行） */
    {
        .mod_data_offset = 616, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30325,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC任务警告2屏蔽字（Excel 第 371 行） */
    {
        .mod_data_offset = 618, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30326,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* DCDC任务警告3屏蔽字（Excel 第 372 行） */
    {
        .mod_data_offset = 620, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30327,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 中断故障恢复次数（Excel 第 373 行） */
    {
        .mod_data_offset = 622, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30328,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 任务故障恢复次数（Excel 第 374 行） */
    {
        .mod_data_offset = 624, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30329,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 中断级故障恢复的窗口时间（Excel 第 375 行） */
    {
        .mod_data_offset = 626, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30330,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 任务级故障恢复的窗口时间（Excel 第 376 行） */
    {
        .mod_data_offset = 628, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30331,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 整流Rect1电压采样系数校准值（Excel 第 377 行） */
    {
        .mod_data_offset = 630, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30332,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网L-R to L-S线电压线电压采样系数校准值（Excel 第 378 行） */
    {
        .mod_data_offset = 634, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30333,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网L-S to L-T线电压线电压采样系数校准值（Excel 第 379 行） */
    {
        .mod_data_offset = 638, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30334,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线电压采样系数校准值（Excel 第 380 行） */
    {
        .mod_data_offset = 642, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30335,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出电压电压采样系数校准值（Excel 第 381 行） */
    {
        .mod_data_offset = 646, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30336,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压采样系数校准值（Excel 第 382 行） */
    {
        .mod_data_offset = 650, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30337,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost1电感电流采样系数校准值（Excel 第 383 行） */
    {
        .mod_data_offset = 654, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30338,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost2电感电流采样系数校准值（Excel 第 384 行） */
    {
        .mod_data_offset = 658, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30339,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost3电感电流采样系数校准值（Excel 第 385 行） */
    {
        .mod_data_offset = 662, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30340,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost4电感电流采样系数校准值（Excel 第 386 行） */
    {
        .mod_data_offset = 666, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30341,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck1电感电流采样系数校准值（Excel 第 387 行） */
    {
        .mod_data_offset = 670, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30342,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck2电感电流采样系数校准值（Excel 第 388 行） */
    {
        .mod_data_offset = 674, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30343,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck3电感电流采样系数校准值（Excel 第 389 行） */
    {
        .mod_data_offset = 678, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30344,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck4电感电流采样系数校准值（Excel 第 390 行） */
    {
        .mod_data_offset = 682, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30345,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出电流采样系数校准值（Excel 第 391 行） */
    {
        .mod_data_offset = 686, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30346,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 整流Rect1电压偏移量校准值（Excel 第 392 行） */
    {
        .mod_data_offset = 690, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30347,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网L-R to L-S线电压线电压偏移量校准值（Excel 第 393 行） */
    {
        .mod_data_offset = 694, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30348,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电网L-S to L-T线电压线电压偏移量校准值（Excel 第 394 行） */
    {
        .mod_data_offset = 698, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30349,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost输出母线电压偏移量校准值（Excel 第 395 行） */
    {
        .mod_data_offset = 702, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30350,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出电压电压偏移量校准值（Excel 第 396 行） */
    {
        .mod_data_offset = 706, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30351,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 电池电压偏移量校准值（Excel 第 397 行） */
    {
        .mod_data_offset = 710, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30352,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost1电感电流偏移量校准值（Excel 第 398 行） */
    {
        .mod_data_offset = 714, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30353,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost2电感电流偏移量校准值（Excel 第 399 行） */
    {
        .mod_data_offset = 718, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30354,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost3电感电流偏移量校准值（Excel 第 400 行） */
    {
        .mod_data_offset = 722, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30355,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Boost4电感电流偏移量校准值（Excel 第 401 行） */
    {
        .mod_data_offset = 726, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30356,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck1电感电流偏移量校准值（Excel 第 402 行） */
    {
        .mod_data_offset = 730, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30357,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck2电感电流偏移量校准值（Excel 第 403 行） */
    {
        .mod_data_offset = 734, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30358,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck3电感电流偏移量校准值（Excel 第 404 行） */
    {
        .mod_data_offset = 738, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30359,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck4电感电流偏移量校准值（Excel 第 405 行） */
    {
        .mod_data_offset = 742, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30360,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* Buck输出电流偏移量校准值（Excel 第 406 行） */
    {
        .mod_data_offset = 746, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30361,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号1（Excel 第 407 行） */
    {
        .mod_data_offset = 750, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30362,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号2（Excel 第 408 行） */
    {
        .mod_data_offset = 752, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30363,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号3（Excel 第 409 行） */
    {
        .mod_data_offset = 754, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30364,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号4（Excel 第 410 行） */
    {
        .mod_data_offset = 756, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30365,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号5（Excel 第 411 行） */
    {
        .mod_data_offset = 758, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30366,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号6（Excel 第 412 行） */
    {
        .mod_data_offset = 760, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30367,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号7（Excel 第 413 行） */
    {
        .mod_data_offset = 762, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30368,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号8（Excel 第 414 行） */
    {
        .mod_data_offset = 764, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30369,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号9（Excel 第 415 行） */
    {
        .mod_data_offset = 766, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30370,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号10（Excel 第 416 行） */
    {
        .mod_data_offset = 768, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30371,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号11（Excel 第 417 行） */
    {
        .mod_data_offset = 770, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30372,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号12（Excel 第 418 行） */
    {
        .mod_data_offset = 772, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30373,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号13（Excel 第 419 行） */
    {
        .mod_data_offset = 774, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30374,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号14（Excel 第 420 行） */
    {
        .mod_data_offset = 776, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30375,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号15（Excel 第 421 行） */
    {
        .mod_data_offset = 778, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30376,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号16（Excel 第 422 行） */
    {
        .mod_data_offset = 780, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30377,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号17（Excel 第 423 行） */
    {
        .mod_data_offset = 782, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30378,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号18（Excel 第 424 行） */
    {
        .mod_data_offset = 784, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30379,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号19（Excel 第 425 行） */
    {
        .mod_data_offset = 786, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30380,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义整型标定信号20（Excel 第 426 行） */
    {
        .mod_data_offset = 788, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = 30381,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号1（Excel 第 427 行） */
    {
        .mod_data_offset = 790, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30382,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号2（Excel 第 428 行） */
    {
        .mod_data_offset = 794, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30383,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号3（Excel 第 429 行） */
    {
        .mod_data_offset = 798, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30384,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号4（Excel 第 430 行） */
    {
        .mod_data_offset = 802, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30385,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号5（Excel 第 431 行） */
    {
        .mod_data_offset = 806, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30386,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号6（Excel 第 432 行） */
    {
        .mod_data_offset = 810, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30387,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号7（Excel 第 433 行） */
    {
        .mod_data_offset = 814, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30388,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号8（Excel 第 434 行） */
    {
        .mod_data_offset = 818, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30389,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号9（Excel 第 435 行） */
    {
        .mod_data_offset = 822, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30390,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号10（Excel 第 436 行） */
    {
        .mod_data_offset = 826, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30391,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号11（Excel 第 437 行） */
    {
        .mod_data_offset = 830, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30392,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号12（Excel 第 438 行） */
    {
        .mod_data_offset = 834, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30393,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号13（Excel 第 439 行） */
    {
        .mod_data_offset = 838, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30394,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号14（Excel 第 440 行） */
    {
        .mod_data_offset = 842, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30395,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号15（Excel 第 441 行） */
    {
        .mod_data_offset = 846, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30396,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号16（Excel 第 442 行） */
    {
        .mod_data_offset = 850, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30397,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号17（Excel 第 443 行） */
    {
        .mod_data_offset = 854, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30398,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号18（Excel 第 444 行） */
    {
        .mod_data_offset = 858, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30399,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号19（Excel 第 445 行） */
    {
        .mod_data_offset = 862, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30400,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

    /* 自定义浮点标定信号20（Excel 第 446 行） */
    {
        .mod_data_offset = 866, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_S32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_S32, .sig_id = 30401,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .set_pri = 0, .scan_pri = 0,
        .rqst_cyl = (0), .dec_p = 1
    },

};


#define GET_ARRAY_SIZE(num) (sizeof(g_dsp_upp_collect_##num) / sizeof(g_dsp_upp_collect_##num[0]))

#define g_dsp_upp_collect_sig_num \
    GET_ARRAY_SIZE(1) + \
    GET_ARRAY_SIZE(2) + \
    GET_ARRAY_SIZE(99) + \
    GET_ARRAY_SIZE(100) + \
    GET_ARRAY_SIZE(102) + \
    GET_ARRAY_SIZE(103) + \
    (0)

#define INIT_UPP_MOD_DATA(num) \
{ \
    .p_data = (UPP_M_MOD_DATA*)g_dsp_upp_collect_##num, \
    .data_num = sizeof(g_dsp_upp_collect_##num) / sizeof(g_dsp_upp_collect_##num[0]), \
    .mod_id = num \
}

const UPP_M_MOD g_dsp_upp_collect[] = {
    INIT_UPP_MOD_DATA(1),
    INIT_UPP_MOD_DATA(2),
    INIT_UPP_MOD_DATA(99),
    INIT_UPP_MOD_DATA(100),
    INIT_UPP_MOD_DATA(102),
    INIT_UPP_MOD_DATA(103),
};

const UPP_M_MOD_REG g_dsp_upp_collect_table = {
    .p_model_ary = (UPP_M_MOD*)g_dsp_upp_collect,
    .model_num = sizeof(g_dsp_upp_collect) / sizeof(g_dsp_upp_collect[0]),
    .cfg_mode = UPP_CFG_MOD_DATAID
};
