/* 自动生成：generate-code.js；数据来源：CSU-UPM采集数据。
 * 由 dev_cfg.c 包含，沿用工程的 UPP 全量表名称。
 */

const UPP_S_SIG_CFG g_dcdc1_vir_upp_transmit_131[] = {
    /* 模块负载电压（Excel 第 2 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 6, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_LOAD_VOL,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块负载电流（Excel 第 3 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 8, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_LOAD_CUR,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 电池电压（Excel 第 4 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 10, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_BAT_VOL,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 电池电流（Excel 第 5 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 12, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_BAT_CUR,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块交流线电压Uab（Excel 第 6 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 14, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_UAB_VOL,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块交流线电压Ubc（Excel 第 7 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 16, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_UBC_VOL,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块交流线电压Uca（Excel 第 8 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 18, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_UCA_VOL,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 交流频率（Excel 第 9 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 20, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_AC_FREQ,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块温度（Excel 第 10 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 22, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_TEMP,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
};

const UPP_S_SIG_CFG g_dcdc1_vir_upp_transmit_132[] = {
    /* 子板供电方式（Excel 第 11 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 6, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_POWER_MODE_STATE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 子板开关机状态（Excel 第 12 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 8, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_POWER_OFF_STATE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 子板休眠状态（Excel 第 13 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 10, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_SLEEP_STATE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* UPM模块具体故障（Excel 第 14 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 12, .mod_data_len = 4, .mod_data_type = UPP_DATA_TYPE_U32,
        .data_len = 4, .data_type = UPP_DATA_TYPE_U32, .sig_id = UPM_SIG_FAULT_STATE1,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块交流故障（Excel 第 15 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 16, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_AC_FAULT_STATE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 子板故障状态（Excel 第 16 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 18, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_SUB_BOARD_FAULT_STATE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 子板告警状态（Excel 第 17 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 20, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_SUB_BOARD_WARN_STATE,
        .rw_mode = UPP_MODE_R, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
};

const UPP_S_SIG_CFG g_dcdc1_vir_upp_transmit_133[] = {
    /* 负载输出电压设置（Excel 第 18 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 6, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_LOAD_VOL_SET,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 负载输出限流值（Excel 第 19 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 8, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_LOAD_CUR_SET,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 负载输出电压缺省值（Excel 第 20 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 10, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_LOAD_DEFAULT_VOL,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 电池电压设置（Excel 第 21 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 12, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_BAT_VOL_SET,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 电池限流设置（Excel 第 22 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 14, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_BAT_CUR_SET,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 电池输出点电压缺省值（Excel 第 23 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 16, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_BAT_DEFAULT_VOL,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块交流过压值（Excel 第 24 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 18, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_AC_OVER_VOL,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块交流欠压值（Excel 第 25 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 20, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_AC_UNDER_VOL,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块交流失压值（Excel 第 26 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 22, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_AC_NONE_VOL,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块交流频率高门限值（Excel 第 27 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 24, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_AC_OVER_FREQ,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 模块交流频率低门限值（Excel 第 28 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 26, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_AC_UNDER_FREQ,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
};

const UPP_S_SIG_CFG g_dcdc1_vir_upp_transmit_134[] = {
    /* 开关机动作（Excel 第 29 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 6, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_POWER_OFF_CTRL,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 休眠动作（Excel 第 30 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 8, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_SLEEP_CTRL,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
    /* 子板供电动作（Excel 第 31 行） */
    {
        .dev_id = CFG_DEV_LOCAL, .mod_data_offset = 10, .mod_data_len = 2, .mod_data_type = UPP_DATA_TYPE_U16,
        .data_len = 2, .data_type = UPP_DATA_TYPE_U16, .sig_id = UPM_SIG_POWER_MODE_CTRL,
        .rw_mode = UPP_MODE_RW, .byte_order = UPP_S_BYTE_ORDER_BIG, .chg_upload = 0
    },
};

const UPP_S_TBL_MODEL_CFG g_dcdc1_vir_upp_transmit_table[] = {
    {.p_sig_cfg = (UPP_S_SIG_CFG *)g_dcdc1_vir_upp_transmit_131,
     .sig_num = ITEM_OF(g_dcdc1_vir_upp_transmit_131), .model = 131},
    {.p_sig_cfg = (UPP_S_SIG_CFG *)g_dcdc1_vir_upp_transmit_132,
     .sig_num = ITEM_OF(g_dcdc1_vir_upp_transmit_132), .model = 132},
    {.p_sig_cfg = (UPP_S_SIG_CFG *)g_dcdc1_vir_upp_transmit_133,
     .sig_num = ITEM_OF(g_dcdc1_vir_upp_transmit_133), .model = 133},
    {.p_sig_cfg = (UPP_S_SIG_CFG *)g_dcdc1_vir_upp_transmit_134,
     .sig_num = ITEM_OF(g_dcdc1_vir_upp_transmit_134), .model = 134},
};
