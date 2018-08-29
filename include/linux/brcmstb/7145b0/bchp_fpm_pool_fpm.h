/***************************************************************************
 *     Copyright (c) 1999-2013, Broadcom Corporation
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Wed May  8 03:09:20 2013
 *                 MD5 Checksum         d41d8cd98f00b204e9800998ecf8427e
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_FPM_POOL_FPM_H__
#define BCHP_FPM_POOL_FPM_H__

/***************************************************************************
 *FPM_POOL_FPM - FPM FPM Pool Management Registers
 ***************************************************************************/
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC    0x03a00200 /* POOL1 Allocation & De-allocation/Free Management Register */
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC    0x03a00208 /* POOL2 Allocation & De-allocation/Free Management Register */
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC    0x03a00210 /* POOL3 Allocation & De-allocation/Free Management Register */
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC    0x03a00218 /* POOL4 Allocation & De-allocation/Free Management Register */
#define BCHP_FPM_POOL_FPM_SPARE                  0x03a00220 /* Spare Register for future use */
#define BCHP_FPM_POOL_FPM_POOL_MULTI             0x03a00224 /* Multi-cast Token Update Control Register */

/***************************************************************************
 *POOL1_ALLOC_DEALLOC - POOL1 Allocation & De-allocation/Free Management Register
 ***************************************************************************/
/* FPM_POOL_FPM :: POOL1_ALLOC_DEALLOC :: TOKEN_VALID [31:31] */
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_TOKEN_VALID_MASK     0x80000000
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_TOKEN_VALID_SHIFT    31
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_TOKEN_VALID_DEFAULT  0x00000000

/* FPM_POOL_FPM :: POOL1_ALLOC_DEALLOC :: reserved0 [30:30] */
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_reserved0_MASK       0x40000000
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_reserved0_SHIFT      30

/* FPM_POOL_FPM :: POOL1_ALLOC_DEALLOC :: POOL_ID [29:28] */
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_POOL_ID_MASK         0x30000000
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_POOL_ID_SHIFT        28
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_POOL_ID_DEFAULT      0x00000000

/* FPM_POOL_FPM :: POOL1_ALLOC_DEALLOC :: TOKEN_INDEX [27:12] */
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_TOKEN_INDEX_MASK     0x0ffff000
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_TOKEN_INDEX_SHIFT    12
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_TOKEN_INDEX_DEFAULT  0x00000000

/* FPM_POOL_FPM :: POOL1_ALLOC_DEALLOC :: TOKEN_SIZE [11:00] */
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_TOKEN_SIZE_MASK      0x00000fff
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_TOKEN_SIZE_SHIFT     0
#define BCHP_FPM_POOL_FPM_POOL1_ALLOC_DEALLOC_TOKEN_SIZE_DEFAULT   0x00000000

/***************************************************************************
 *POOL2_ALLOC_DEALLOC - POOL2 Allocation & De-allocation/Free Management Register
 ***************************************************************************/
/* FPM_POOL_FPM :: POOL2_ALLOC_DEALLOC :: TOKEN_VALID [31:31] */
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_TOKEN_VALID_MASK     0x80000000
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_TOKEN_VALID_SHIFT    31
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_TOKEN_VALID_DEFAULT  0x00000000

/* FPM_POOL_FPM :: POOL2_ALLOC_DEALLOC :: reserved0 [30:30] */
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_reserved0_MASK       0x40000000
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_reserved0_SHIFT      30

/* FPM_POOL_FPM :: POOL2_ALLOC_DEALLOC :: POOL_ID [29:28] */
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_POOL_ID_MASK         0x30000000
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_POOL_ID_SHIFT        28
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_POOL_ID_DEFAULT      0x00000000

/* FPM_POOL_FPM :: POOL2_ALLOC_DEALLOC :: TOKEN_INDEX [27:12] */
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_TOKEN_INDEX_MASK     0x0ffff000
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_TOKEN_INDEX_SHIFT    12
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_TOKEN_INDEX_DEFAULT  0x00000000

/* FPM_POOL_FPM :: POOL2_ALLOC_DEALLOC :: TOKEN_SIZE [11:00] */
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_TOKEN_SIZE_MASK      0x00000fff
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_TOKEN_SIZE_SHIFT     0
#define BCHP_FPM_POOL_FPM_POOL2_ALLOC_DEALLOC_TOKEN_SIZE_DEFAULT   0x00000000

/***************************************************************************
 *POOL3_ALLOC_DEALLOC - POOL3 Allocation & De-allocation/Free Management Register
 ***************************************************************************/
/* FPM_POOL_FPM :: POOL3_ALLOC_DEALLOC :: TOKEN_VALID [31:31] */
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_TOKEN_VALID_MASK     0x80000000
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_TOKEN_VALID_SHIFT    31
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_TOKEN_VALID_DEFAULT  0x00000000

/* FPM_POOL_FPM :: POOL3_ALLOC_DEALLOC :: reserved0 [30:30] */
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_reserved0_MASK       0x40000000
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_reserved0_SHIFT      30

/* FPM_POOL_FPM :: POOL3_ALLOC_DEALLOC :: POOL_ID [29:28] */
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_POOL_ID_MASK         0x30000000
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_POOL_ID_SHIFT        28
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_POOL_ID_DEFAULT      0x00000000

/* FPM_POOL_FPM :: POOL3_ALLOC_DEALLOC :: TOKEN_INDEX [27:12] */
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_TOKEN_INDEX_MASK     0x0ffff000
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_TOKEN_INDEX_SHIFT    12
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_TOKEN_INDEX_DEFAULT  0x00000000

/* FPM_POOL_FPM :: POOL3_ALLOC_DEALLOC :: TOKEN_SIZE [11:00] */
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_TOKEN_SIZE_MASK      0x00000fff
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_TOKEN_SIZE_SHIFT     0
#define BCHP_FPM_POOL_FPM_POOL3_ALLOC_DEALLOC_TOKEN_SIZE_DEFAULT   0x00000000

/***************************************************************************
 *POOL4_ALLOC_DEALLOC - POOL4 Allocation & De-allocation/Free Management Register
 ***************************************************************************/
/* FPM_POOL_FPM :: POOL4_ALLOC_DEALLOC :: TOKEN_VALID [31:31] */
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_TOKEN_VALID_MASK     0x80000000
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_TOKEN_VALID_SHIFT    31
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_TOKEN_VALID_DEFAULT  0x00000000

/* FPM_POOL_FPM :: POOL4_ALLOC_DEALLOC :: reserved0 [30:30] */
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_reserved0_MASK       0x40000000
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_reserved0_SHIFT      30

/* FPM_POOL_FPM :: POOL4_ALLOC_DEALLOC :: POOL_ID [29:28] */
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_POOL_ID_MASK         0x30000000
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_POOL_ID_SHIFT        28
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_POOL_ID_DEFAULT      0x00000000

/* FPM_POOL_FPM :: POOL4_ALLOC_DEALLOC :: TOKEN_INDEX [27:12] */
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_TOKEN_INDEX_MASK     0x0ffff000
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_TOKEN_INDEX_SHIFT    12
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_TOKEN_INDEX_DEFAULT  0x00000000

/* FPM_POOL_FPM :: POOL4_ALLOC_DEALLOC :: TOKEN_SIZE [11:00] */
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_TOKEN_SIZE_MASK      0x00000fff
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_TOKEN_SIZE_SHIFT     0
#define BCHP_FPM_POOL_FPM_POOL4_ALLOC_DEALLOC_TOKEN_SIZE_DEFAULT   0x00000000

/***************************************************************************
 *SPARE - Spare Register for future use
 ***************************************************************************/
/* FPM_POOL_FPM :: SPARE :: SPARE_BITS [31:00] */
#define BCHP_FPM_POOL_FPM_SPARE_SPARE_BITS_MASK                    0xffffffff
#define BCHP_FPM_POOL_FPM_SPARE_SPARE_BITS_SHIFT                   0
#define BCHP_FPM_POOL_FPM_SPARE_SPARE_BITS_DEFAULT                 0x00000000

/***************************************************************************
 *POOL_MULTI - Multi-cast Token Update Control Register
 ***************************************************************************/
/* FPM_POOL_FPM :: POOL_MULTI :: TOKEN_VALID [31:31] */
#define BCHP_FPM_POOL_FPM_POOL_MULTI_TOKEN_VALID_MASK              0x80000000
#define BCHP_FPM_POOL_FPM_POOL_MULTI_TOKEN_VALID_SHIFT             31
#define BCHP_FPM_POOL_FPM_POOL_MULTI_TOKEN_VALID_DEFAULT           0x00000000

/* FPM_POOL_FPM :: POOL_MULTI :: reserved0 [30:30] */
#define BCHP_FPM_POOL_FPM_POOL_MULTI_reserved0_MASK                0x40000000
#define BCHP_FPM_POOL_FPM_POOL_MULTI_reserved0_SHIFT               30

/* FPM_POOL_FPM :: POOL_MULTI :: TOKEN_INDEX [29:12] */
#define BCHP_FPM_POOL_FPM_POOL_MULTI_TOKEN_INDEX_MASK              0x3ffff000
#define BCHP_FPM_POOL_FPM_POOL_MULTI_TOKEN_INDEX_SHIFT             12
#define BCHP_FPM_POOL_FPM_POOL_MULTI_TOKEN_INDEX_DEFAULT           0x00000000

/* FPM_POOL_FPM :: POOL_MULTI :: UPDATE_TYPE [11:11] */
#define BCHP_FPM_POOL_FPM_POOL_MULTI_UPDATE_TYPE_MASK              0x00000800
#define BCHP_FPM_POOL_FPM_POOL_MULTI_UPDATE_TYPE_SHIFT             11
#define BCHP_FPM_POOL_FPM_POOL_MULTI_UPDATE_TYPE_DEFAULT           0x00000000

/* FPM_POOL_FPM :: POOL_MULTI :: reserved1 [10:07] */
#define BCHP_FPM_POOL_FPM_POOL_MULTI_reserved1_MASK                0x00000780
#define BCHP_FPM_POOL_FPM_POOL_MULTI_reserved1_SHIFT               7

/* FPM_POOL_FPM :: POOL_MULTI :: TOKEN_MULTI [06:00] */
#define BCHP_FPM_POOL_FPM_POOL_MULTI_TOKEN_MULTI_MASK              0x0000007f
#define BCHP_FPM_POOL_FPM_POOL_MULTI_TOKEN_MULTI_SHIFT             0
#define BCHP_FPM_POOL_FPM_POOL_MULTI_TOKEN_MULTI_DEFAULT           0x00000000

#endif /* #ifndef BCHP_FPM_POOL_FPM_H__ */

/* End of File */
