/***************************************************************************
 *     Copyright (c) 1999-2014, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
 *
 *
 * THIS SOFTWARE MAY ONLY BE USED SUBJECT TO AN EXECUTED SOFTWARE LICENSE
 * AGREEMENT  BETWEEN THE USER AND BROADCOM.  YOU HAVE NO RIGHT TO USE OR
 * EXPLOIT THIS MATERIAL EXCEPT SUBJECT TO THE TERMS OF SUCH AN AGREEMENT.
 *
 * $brcm_Workfile: $
 * $brcm_Revision: $
 * $brcm_Date: $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on              Tue Dec  2 03:18:47 2014
 *                 Full Compile MD5 Checksum 3461841ff250f7118305e1f1650424cf
 *                   (minus title and desc)  
 *                 MD5 Checksum              92044aba65695bbffdeefc8d096b8587
 *
 * Compiled with:  RDB Utility               combo_header.pl
 *                 RDB Parser                3.0
 *                 unknown                   unknown
 *                 Perl Interpreter          5.008008
 *                 Operating System          linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_PCIE_0_RC_CFG_PCIE_H__
#define BCHP_PCIE_0_RC_CFG_PCIE_H__

/***************************************************************************
 *PCIE_0_RC_CFG_PCIE
 ***************************************************************************/
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY  0x004700ac /* pcie_capability */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY 0x004700b0 /* device_capability */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL 0x004700b4 /* device_status_control */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY  0x004700b8 /* link_capability */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL 0x004700bc /* link_status_control */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY  0x004700c0 /* slot_capability */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS 0x004700c4 /* slot_control_status */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL 0x004700c8 /* root_cap_control */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS      0x004700cc /* root_status */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_2 0x004700d0 /* device_capability_2 */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2 0x004700d4 /* device_status_control_2 */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_2 0x004700d8 /* link_capability_2 */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2 0x004700dc /* link_status_control_2 */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_2 0x004700e0 /* slot_capability_2 */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_STATUS_CONTROL_2 0x004700e4 /* slot_status_control_2 */

/***************************************************************************
 *PCIE_CAPABILITY - pcie_capability
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: PCIE_CAPABILITY :: RESERVED0 [31:30] */
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_RESERVED0_MASK     0xc0000000
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_RESERVED0_SHIFT    30

/* PCIE_0_RC_CFG_PCIE :: PCIE_CAPABILITY :: MSG_NUM [29:25] */
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_MSG_NUM_MASK       0x3e000000
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_MSG_NUM_SHIFT      25
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_MSG_NUM_DEFAULT    0x00000000

/* PCIE_0_RC_CFG_PCIE :: PCIE_CAPABILITY :: SLOT_IMPLEMENTED [24:24] */
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_SLOT_IMPLEMENTED_MASK 0x01000000
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_SLOT_IMPLEMENTED_SHIFT 24
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_SLOT_IMPLEMENTED_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: PCIE_CAPABILITY :: TYPE [23:20] */
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_TYPE_MASK          0x00f00000
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_TYPE_SHIFT         20
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_TYPE_DEFAULT       0x00000004

/* PCIE_0_RC_CFG_PCIE :: PCIE_CAPABILITY :: VER [19:16] */
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_VER_MASK           0x000f0000
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_VER_SHIFT          16
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_VER_DEFAULT        0x00000002

/* PCIE_0_RC_CFG_PCIE :: PCIE_CAPABILITY :: PCIE_NEXT_CAP_PTR [15:08] */
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_PCIE_NEXT_CAP_PTR_MASK 0x0000ff00
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_PCIE_NEXT_CAP_PTR_SHIFT 8
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_PCIE_NEXT_CAP_PTR_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: PCIE_CAPABILITY :: PCIE_CAP_ID [07:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_PCIE_CAP_ID_MASK   0x000000ff
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_PCIE_CAP_ID_SHIFT  0
#define BCHP_PCIE_0_RC_CFG_PCIE_PCIE_CAPABILITY_PCIE_CAP_ID_DEFAULT 0x00000010

/***************************************************************************
 *DEVICE_CAPABILITY - device_capability
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: RESERVED3 [31:28] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_RESERVED3_MASK   0xf0000000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_RESERVED3_SHIFT  28

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: CAPTURED_SLOT_PWR_SCALE [27:26] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_CAPTURED_SLOT_PWR_SCALE_MASK 0x0c000000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_CAPTURED_SLOT_PWR_SCALE_SHIFT 26
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_CAPTURED_SLOT_PWR_SCALE_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: CAPTURED_SLOT_PWR_VAL [25:18] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_CAPTURED_SLOT_PWR_VAL_MASK 0x03fc0000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_CAPTURED_SLOT_PWR_VAL_SHIFT 18
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_CAPTURED_SLOT_PWR_VAL_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: RESERVED2 [17:16] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_RESERVED2_MASK   0x00030000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_RESERVED2_SHIFT  16

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: ROLE_BASED_ERR_RPT [15:15] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_ROLE_BASED_ERR_RPT_MASK 0x00008000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_ROLE_BASED_ERR_RPT_SHIFT 15
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_ROLE_BASED_ERR_RPT_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: RESERVED1 [14:12] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_RESERVED1_MASK   0x00007000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_RESERVED1_SHIFT  12

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: L1_ACCEPTABLE_LATENCY [11:09] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_L1_ACCEPTABLE_LATENCY_MASK 0x00000e00
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_L1_ACCEPTABLE_LATENCY_SHIFT 9
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_L1_ACCEPTABLE_LATENCY_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: L0S_ACCEPTABLE_LATENCY [08:06] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_L0S_ACCEPTABLE_LATENCY_MASK 0x000001c0
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_L0S_ACCEPTABLE_LATENCY_SHIFT 6
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_L0S_ACCEPTABLE_LATENCY_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: EXTENDED_TAG_SUPPORT [05:05] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_EXTENDED_TAG_SUPPORT_MASK 0x00000020
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_EXTENDED_TAG_SUPPORT_SHIFT 5
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_EXTENDED_TAG_SUPPORT_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: RESERVED0 [04:03] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_RESERVED0_MASK   0x00000018
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_RESERVED0_SHIFT  3

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY :: MAX_PL_SIZE_SUPPORTED [02:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_MAX_PL_SIZE_SUPPORTED_MASK 0x00000007
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_MAX_PL_SIZE_SUPPORTED_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_MAX_PL_SIZE_SUPPORTED_DEFAULT 0x00000002

/***************************************************************************
 *DEVICE_STATUS_CONTROL - device_status_control
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: RESERVED2 [31:22] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_RESERVED2_MASK 0xffc00000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_RESERVED2_SHIFT 22

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: NP_TRANSACTION_PEND [21:21] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NP_TRANSACTION_PEND_MASK 0x00200000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NP_TRANSACTION_PEND_SHIFT 21
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NP_TRANSACTION_PEND_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: AUX_PWR_DET [20:20] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_AUX_PWR_DET_MASK 0x00100000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_AUX_PWR_DET_SHIFT 20
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_AUX_PWR_DET_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: UNSUP_REQ_DET [19:19] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_UNSUP_REQ_DET_MASK 0x00080000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_UNSUP_REQ_DET_SHIFT 19
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_UNSUP_REQ_DET_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: FATAL_ERR_DET [18:18] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_FATAL_ERR_DET_MASK 0x00040000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_FATAL_ERR_DET_SHIFT 18
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_FATAL_ERR_DET_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: NON_FATAL_ERR_DET [17:17] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NON_FATAL_ERR_DET_MASK 0x00020000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NON_FATAL_ERR_DET_SHIFT 17
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NON_FATAL_ERR_DET_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: CORR_ERR_DET [16:16] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_CORR_ERR_DET_MASK 0x00010000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_CORR_ERR_DET_SHIFT 16
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_CORR_ERR_DET_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: RESERVED1 [15:15] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_RESERVED1_MASK 0x00008000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_RESERVED1_SHIFT 15

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: MAX_READ_REQ_SIZ [14:12] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_MAX_READ_REQ_SIZ_MASK 0x00007000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_MAX_READ_REQ_SIZ_SHIFT 12
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_MAX_READ_REQ_SIZ_DEFAULT 0x00000002

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: NO_SNOOP_ENABLE [11:11] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NO_SNOOP_ENABLE_MASK 0x00000800
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NO_SNOOP_ENABLE_SHIFT 11
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NO_SNOOP_ENABLE_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: AUX_PWR_PM_ENA [10:10] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_AUX_PWR_PM_ENA_MASK 0x00000400
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_AUX_PWR_PM_ENA_SHIFT 10
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_AUX_PWR_PM_ENA_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: RESERVED0 [09:09] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_RESERVED0_MASK 0x00000200
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_RESERVED0_SHIFT 9

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: EXTENDED_TAG_EN [08:08] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_EXTENDED_TAG_EN_MASK 0x00000100
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_EXTENDED_TAG_EN_SHIFT 8
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_EXTENDED_TAG_EN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: MAX_PAYLOAD_SIZE [07:05] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_MAX_PAYLOAD_SIZE_MASK 0x000000e0
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_MAX_PAYLOAD_SIZE_SHIFT 5
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_MAX_PAYLOAD_SIZE_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: RELAX_ORDERING_ENABLE [04:04] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_RELAX_ORDERING_ENABLE_MASK 0x00000010
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_RELAX_ORDERING_ENABLE_SHIFT 4
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_RELAX_ORDERING_ENABLE_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: U_REQ_REPORT_EN [03:03] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_U_REQ_REPORT_EN_MASK 0x00000008
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_U_REQ_REPORT_EN_SHIFT 3
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_U_REQ_REPORT_EN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: FATAL_ERR_REPORT_EN [02:02] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_FATAL_ERR_REPORT_EN_MASK 0x00000004
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_FATAL_ERR_REPORT_EN_SHIFT 2
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_FATAL_ERR_REPORT_EN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: NFATAL_ERR_REPORT_EN [01:01] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NFATAL_ERR_REPORT_EN_MASK 0x00000002
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NFATAL_ERR_REPORT_EN_SHIFT 1
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_NFATAL_ERR_REPORT_EN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL :: CORR_ERR_REPORT_EN [00:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_CORR_ERR_REPORT_EN_MASK 0x00000001
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_CORR_ERR_REPORT_EN_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_CORR_ERR_REPORT_EN_DEFAULT 0x00000000

/***************************************************************************
 *LINK_CAPABILITY - link_capability
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: PORT_NUMBER [31:24] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_PORT_NUMBER_MASK   0xff000000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_PORT_NUMBER_SHIFT  24
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_PORT_NUMBER_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: RESERVED0 [23:23] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_RESERVED0_MASK     0x00800000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_RESERVED0_SHIFT    23

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: ASPM_OPTIONALITY [22:22] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_ASPM_OPTIONALITY_MASK 0x00400000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_ASPM_OPTIONALITY_SHIFT 22
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_ASPM_OPTIONALITY_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: LINK_BW_NOTIFY [21:21] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_LINK_BW_NOTIFY_MASK 0x00200000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_LINK_BW_NOTIFY_SHIFT 21
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_LINK_BW_NOTIFY_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: DL_ACTIVE_REP [20:20] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_DL_ACTIVE_REP_MASK 0x00100000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_DL_ACTIVE_REP_SHIFT 20
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_DL_ACTIVE_REP_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: SUR_DWN_ERR_REP [19:19] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_SUR_DWN_ERR_REP_MASK 0x00080000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_SUR_DWN_ERR_REP_SHIFT 19
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_SUR_DWN_ERR_REP_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: CLK_PWR_MGMT [18:18] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_CLK_PWR_MGMT_MASK  0x00040000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_CLK_PWR_MGMT_SHIFT 18
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_CLK_PWR_MGMT_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: L1_EXIT_LAT [17:15] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_L1_EXIT_LAT_MASK   0x00038000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_L1_EXIT_LAT_SHIFT  15
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_L1_EXIT_LAT_DEFAULT 0x00000002

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: L0S_EXIT_LAT [14:12] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_L0S_EXIT_LAT_MASK  0x00007000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_L0S_EXIT_LAT_SHIFT 12
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_L0S_EXIT_LAT_DEFAULT 0x00000005

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: ASPM_SUPT [11:10] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_ASPM_SUPT_MASK     0x00000c00
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_ASPM_SUPT_SHIFT    10
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_ASPM_SUPT_DEFAULT  0x00000003

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: MAX_LINK_WIDTH [09:04] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_MAX_LINK_WIDTH_MASK 0x000003f0
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_MAX_LINK_WIDTH_SHIFT 4
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_MAX_LINK_WIDTH_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY :: MAX_LINK_SPEED [03:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_MAX_LINK_SPEED_MASK 0x0000000f
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_MAX_LINK_SPEED_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_MAX_LINK_SPEED_DEFAULT 0x00000002

/***************************************************************************
 *LINK_STATUS_CONTROL - link_status_control
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: RESERVED3 [31:30] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RESERVED3_MASK 0xc0000000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RESERVED3_SHIFT 30

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: DL_ACTIVE [29:29] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_DL_ACTIVE_MASK 0x20000000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_DL_ACTIVE_SHIFT 29
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_DL_ACTIVE_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: SLOT_CLK_CONFIG [28:28] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_SLOT_CLK_CONFIG_MASK 0x10000000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_SLOT_CLK_CONFIG_SHIFT 28
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_SLOT_CLK_CONFIG_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: LINK_TRAINING [27:27] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_TRAINING_MASK 0x08000000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_TRAINING_SHIFT 27
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_TRAINING_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: RESERVED2 [26:26] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RESERVED2_MASK 0x04000000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RESERVED2_SHIFT 26

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: NEG_LINK_WIDTH [25:20] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_NEG_LINK_WIDTH_MASK 0x03f00000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_NEG_LINK_WIDTH_SHIFT 20
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_NEG_LINK_WIDTH_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: NEG_LINK_SPEED [19:16] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_NEG_LINK_SPEED_MASK 0x000f0000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_NEG_LINK_SPEED_SHIFT 16
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_NEG_LINK_SPEED_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: RESERVED1 [15:12] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RESERVED1_MASK 0x0000f000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RESERVED1_SHIFT 12

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: LINK_BW_INT_EN [11:11] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_BW_INT_EN_MASK 0x00000800
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_BW_INT_EN_SHIFT 11
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_BW_INT_EN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: LINK_BW_MGMT_INT_EN [10:10] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_BW_MGMT_INT_EN_MASK 0x00000400
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_BW_MGMT_INT_EN_SHIFT 10
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_BW_MGMT_INT_EN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: HW_AUTO_WIDTH_DIS [09:09] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_HW_AUTO_WIDTH_DIS_MASK 0x00000200
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_HW_AUTO_WIDTH_DIS_SHIFT 9
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_HW_AUTO_WIDTH_DIS_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: EN_CLK_PW_MGMT [08:08] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_EN_CLK_PW_MGMT_MASK 0x00000100
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_EN_CLK_PW_MGMT_SHIFT 8
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_EN_CLK_PW_MGMT_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: LINK_CR_EXT_SYNC [07:07] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_CR_EXT_SYNC_MASK 0x00000080
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_CR_EXT_SYNC_SHIFT 7
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_CR_EXT_SYNC_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: LINK_CR_COMMON_CLK [06:06] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_CR_COMMON_CLK_MASK 0x00000040
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_CR_COMMON_CLK_SHIFT 6
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_LINK_CR_COMMON_CLK_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: CFG_PSM_RETRAIN_LINK [05:05] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_CFG_PSM_RETRAIN_LINK_MASK 0x00000020
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_CFG_PSM_RETRAIN_LINK_SHIFT 5
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_CFG_PSM_RETRAIN_LINK_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: CFG_PSM_LINK_DISABLE [04:04] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_CFG_PSM_LINK_DISABLE_MASK 0x00000010
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_CFG_PSM_LINK_DISABLE_SHIFT 4
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_CFG_PSM_LINK_DISABLE_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: RCB [03:03] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RCB_MASK       0x00000008
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RCB_SHIFT      3
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RCB_DEFAULT    0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: RESERVED0 [02:02] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RESERVED0_MASK 0x00000004
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_RESERVED0_SHIFT 2

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL :: ASPM_CTRL [01:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_ASPM_CTRL_MASK 0x00000003
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_ASPM_CTRL_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_ASPM_CTRL_DEFAULT 0x00000000

/***************************************************************************
 *SLOT_CAPABILITY - slot_capability
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: SLOT_CAPABILITY :: PHYSICAL_SLOT_NUMBER [31:19] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_PHYSICAL_SLOT_NUMBER_MASK 0xfff80000
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_PHYSICAL_SLOT_NUMBER_SHIFT 19
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_PHYSICAL_SLOT_NUMBER_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: SLOT_CAPABILITY :: UNUSED [18:17] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_UNUSED_MASK        0x00060000
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_UNUSED_SHIFT       17
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_UNUSED_DEFAULT     0x00000000

/* PCIE_0_RC_CFG_PCIE :: SLOT_CAPABILITY :: SLOT_POWER_LIMIT_SCALE [16:15] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_SLOT_POWER_LIMIT_SCALE_MASK 0x00018000
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_SLOT_POWER_LIMIT_SCALE_SHIFT 15
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_SLOT_POWER_LIMIT_SCALE_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: SLOT_CAPABILITY :: SLOT_POWER_LIMIT_VALUE [14:07] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_SLOT_POWER_LIMIT_VALUE_MASK 0x00007f80
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_SLOT_POWER_LIMIT_VALUE_SHIFT 7
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_SLOT_POWER_LIMIT_VALUE_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: SLOT_CAPABILITY :: UNUSED_2 [06:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_UNUSED_2_MASK      0x0000007f
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_UNUSED_2_SHIFT     0
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_UNUSED_2_DEFAULT   0x00000000

/***************************************************************************
 *SLOT_CONTROL_STATUS - slot_control_status
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: SLOT_CONTROL_STATUS :: SLOT_STATUS [31:23] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_SLOT_STATUS_MASK 0xff800000
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_SLOT_STATUS_SHIFT 23
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_SLOT_STATUS_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: SLOT_CONTROL_STATUS :: PRESENCE_DETECT [22:22] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_PRESENCE_DETECT_MASK 0x00400000
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_PRESENCE_DETECT_SHIFT 22
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_PRESENCE_DETECT_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: SLOT_CONTROL_STATUS :: UNUSED_1 [21:16] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_UNUSED_1_MASK  0x003f0000
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_UNUSED_1_SHIFT 16
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_UNUSED_1_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: SLOT_CONTROL_STATUS :: SLOT_CONTROL [15:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_SLOT_CONTROL_MASK 0x0000ffff
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_SLOT_CONTROL_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CONTROL_STATUS_SLOT_CONTROL_DEFAULT 0x00000000

/***************************************************************************
 *ROOT_CAP_CONTROL - root_cap_control
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: ROOT_CAP_CONTROL :: RESERVED1 [31:17] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RESERVED1_MASK    0xfffe0000
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RESERVED1_SHIFT   17

/* PCIE_0_RC_CFG_PCIE :: ROOT_CAP_CONTROL :: RC_CRS_VISIBILITY [16:16] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_CRS_VISIBILITY_MASK 0x00010000
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_CRS_VISIBILITY_SHIFT 16
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_CRS_VISIBILITY_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: ROOT_CAP_CONTROL :: RESERVED0 [15:05] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RESERVED0_MASK    0x0000ffe0
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RESERVED0_SHIFT   5

/* PCIE_0_RC_CFG_PCIE :: ROOT_CAP_CONTROL :: RC_CRS_EN [04:04] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_CRS_EN_MASK    0x00000010
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_CRS_EN_SHIFT   4
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_CRS_EN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: ROOT_CAP_CONTROL :: RC_PME_INT_EN [03:03] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_PME_INT_EN_MASK 0x00000008
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_PME_INT_EN_SHIFT 3
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_PME_INT_EN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: ROOT_CAP_CONTROL :: RC_FATAL_SERR_EN [02:02] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_FATAL_SERR_EN_MASK 0x00000004
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_FATAL_SERR_EN_SHIFT 2
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_FATAL_SERR_EN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: ROOT_CAP_CONTROL :: RC_NONFATAL_SERR_EN [01:01] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_NONFATAL_SERR_EN_MASK 0x00000002
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_NONFATAL_SERR_EN_SHIFT 1
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_NONFATAL_SERR_EN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: ROOT_CAP_CONTROL :: RC_CORR_SERR_EN [00:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_CORR_SERR_EN_MASK 0x00000001
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_CORR_SERR_EN_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_CAP_CONTROL_RC_CORR_SERR_EN_DEFAULT 0x00000000

/***************************************************************************
 *ROOT_STATUS - root_status
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: ROOT_STATUS :: RESERVED0 [31:18] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RESERVED0_MASK         0xfffc0000
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RESERVED0_SHIFT        18

/* PCIE_0_RC_CFG_PCIE :: ROOT_STATUS :: RC_PME_PENDING [17:17] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RC_PME_PENDING_MASK    0x00020000
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RC_PME_PENDING_SHIFT   17
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RC_PME_PENDING_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: ROOT_STATUS :: RC_PME_STATUS [16:16] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RC_PME_STATUS_MASK     0x00010000
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RC_PME_STATUS_SHIFT    16
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RC_PME_STATUS_DEFAULT  0x00000000

/* PCIE_0_RC_CFG_PCIE :: ROOT_STATUS :: RC_PME_REQ_ID [15:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RC_PME_REQ_ID_MASK     0x0000ffff
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RC_PME_REQ_ID_SHIFT    0
#define BCHP_PCIE_0_RC_CFG_PCIE_ROOT_STATUS_RC_PME_REQ_ID_DEFAULT  0x00000000

/***************************************************************************
 *DEVICE_CAPABILITY_2 - device_capability_2
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY_2 :: RESERVED0 [31:05] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_2_RESERVED0_MASK 0xffffffe0
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_2_RESERVED0_SHIFT 5

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY_2 :: CMPL_TIMEOUT_DISABL_SUPPORTED [04:04] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_2_CMPL_TIMEOUT_DISABL_SUPPORTED_MASK 0x00000010
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_2_CMPL_TIMEOUT_DISABL_SUPPORTED_SHIFT 4
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_2_CMPL_TIMEOUT_DISABL_SUPPORTED_DEFAULT 0x00000001

/* PCIE_0_RC_CFG_PCIE :: DEVICE_CAPABILITY_2 :: CMPL_TIMEOUT_RANGES_SUPPORTED [03:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_2_CMPL_TIMEOUT_RANGES_SUPPORTED_MASK 0x0000000f
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_2_CMPL_TIMEOUT_RANGES_SUPPORTED_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_CAPABILITY_2_CMPL_TIMEOUT_RANGES_SUPPORTED_DEFAULT 0x0000000f

/***************************************************************************
 *DEVICE_STATUS_CONTROL_2 - device_status_control_2
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL_2 :: DEVICE_STATUS_2 [31:16] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_DEVICE_STATUS_2_MASK 0xffff0000
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_DEVICE_STATUS_2_SHIFT 16
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_DEVICE_STATUS_2_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL_2 :: RESERVED0 [15:05] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_RESERVED0_MASK 0x0000ffe0
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_RESERVED0_SHIFT 5

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL_2 :: CMPL_TIMEOUT_DISABLE [04:04] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_CMPL_TIMEOUT_DISABLE_MASK 0x00000010
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_CMPL_TIMEOUT_DISABLE_SHIFT 4
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_CMPL_TIMEOUT_DISABLE_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: DEVICE_STATUS_CONTROL_2 :: CMPL_TIMEOUT_VALUE [03:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_CMPL_TIMEOUT_VALUE_MASK 0x0000000f
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_CMPL_TIMEOUT_VALUE_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_DEVICE_STATUS_CONTROL_2_CMPL_TIMEOUT_VALUE_DEFAULT 0x00000000

/***************************************************************************
 *LINK_CAPABILITY_2 - link_capability_2
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: LINK_CAPABILITY_2 :: LINK_CAPABILITY_2 [31:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_2_LINK_CAPABILITY_2_MASK 0xffffffff
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_2_LINK_CAPABILITY_2_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_CAPABILITY_2_LINK_CAPABILITY_2_DEFAULT 0x00000000

/***************************************************************************
 *LINK_STATUS_CONTROL_2 - link_status_control_2
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: LINK_STATUS_2 [31:17] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_LINK_STATUS_2_MASK 0xfffe0000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_LINK_STATUS_2_SHIFT 17
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_LINK_STATUS_2_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: CURR_DEEMPH_LEVEL [16:16] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CURR_DEEMPH_LEVEL_MASK 0x00010000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CURR_DEEMPH_LEVEL_SHIFT 16
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CURR_DEEMPH_LEVEL_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: RESERVED0 [15:13] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_RESERVED0_MASK 0x0000e000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_RESERVED0_SHIFT 13

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: CFG_COMPLIANCE_DEEMPH [12:12] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_COMPLIANCE_DEEMPH_MASK 0x00001000
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_COMPLIANCE_DEEMPH_SHIFT 12
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_COMPLIANCE_DEEMPH_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: CFG_COMPLIANCE_SOS [11:11] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_COMPLIANCE_SOS_MASK 0x00000800
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_COMPLIANCE_SOS_SHIFT 11
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_COMPLIANCE_SOS_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: CFG_ENTER_MOD_COMPLIANCE [10:10] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_ENTER_MOD_COMPLIANCE_MASK 0x00000400
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_ENTER_MOD_COMPLIANCE_SHIFT 10
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_ENTER_MOD_COMPLIANCE_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: CFG_TX_MARGIN [09:07] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_TX_MARGIN_MASK 0x00000380
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_TX_MARGIN_SHIFT 7
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_CFG_TX_MARGIN_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: SEL_DEEMPHASIS [06:06] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_SEL_DEEMPHASIS_MASK 0x00000040
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_SEL_DEEMPHASIS_SHIFT 6
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_SEL_DEEMPHASIS_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: HW_AUTO_SPEED_DISABLE [05:05] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_HW_AUTO_SPEED_DISABLE_MASK 0x00000020
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_HW_AUTO_SPEED_DISABLE_SHIFT 5
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_HW_AUTO_SPEED_DISABLE_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: ENTER_COMPLIANCE [04:04] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_ENTER_COMPLIANCE_MASK 0x00000010
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_ENTER_COMPLIANCE_SHIFT 4
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_ENTER_COMPLIANCE_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: LINK_STATUS_CONTROL_2 :: TARGET_LINK_SPEED [03:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_TARGET_LINK_SPEED_MASK 0x0000000f
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_TARGET_LINK_SPEED_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_LINK_STATUS_CONTROL_2_TARGET_LINK_SPEED_DEFAULT 0x00000001

/***************************************************************************
 *SLOT_CAPABILITY_2 - slot_capability_2
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: SLOT_CAPABILITY_2 :: SLOT_CAPABILITY_2 [31:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_2_SLOT_CAPABILITY_2_MASK 0xffffffff
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_2_SLOT_CAPABILITY_2_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_CAPABILITY_2_SLOT_CAPABILITY_2_DEFAULT 0x00000000

/***************************************************************************
 *SLOT_STATUS_CONTROL_2 - slot_status_control_2
 ***************************************************************************/
/* PCIE_0_RC_CFG_PCIE :: SLOT_STATUS_CONTROL_2 :: SLOT_STATUS_2 [31:16] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_STATUS_CONTROL_2_SLOT_STATUS_2_MASK 0xffff0000
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_STATUS_CONTROL_2_SLOT_STATUS_2_SHIFT 16
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_STATUS_CONTROL_2_SLOT_STATUS_2_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_PCIE :: SLOT_STATUS_CONTROL_2 :: SLOT_CONTROL_2 [15:00] */
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_STATUS_CONTROL_2_SLOT_CONTROL_2_MASK 0x0000ffff
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_STATUS_CONTROL_2_SLOT_CONTROL_2_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_PCIE_SLOT_STATUS_CONTROL_2_SLOT_CONTROL_2_DEFAULT 0x00000000

#endif /* #ifndef BCHP_PCIE_0_RC_CFG_PCIE_H__ */

/* End of File */
