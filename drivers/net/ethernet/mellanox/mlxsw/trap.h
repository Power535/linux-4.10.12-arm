/*
 * drivers/net/ethernet/mellanox/mlxsw/trap.h
 * Copyright (c) 2015 Mellanox Technologies. All rights reserved.
 * Copyright (c) 2015 Elad Raz <eladr@mellanox.com>
 * Copyright (c) 2015 Jiri Pirko <jiri@mellanox.com>
 * Copyright (c) 2015 Ido Schimmel <idosch@mellanox.com>
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. Neither the names of the copyright holders nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * Alternatively, this software may be distributed under the terms of the
 * GNU General Public License ("GPL") version 2 as published by the Free
 * Software Foundation.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef _MLXSW_TRAP_H
#define _MLXSW_TRAP_H

enum {
	/* Ethernet EMAD and FDB miss */
	MLXSW_TRAP_ID_FDB_MC = 0x01,
	MLXSW_TRAP_ID_ETHEMAD = 0x05,
	/* L2 traps for specific packet types */
	MLXSW_TRAP_ID_STP = 0x10,
	MLXSW_TRAP_ID_LACP = 0x11,
	MLXSW_TRAP_ID_EAPOL = 0x12,
	MLXSW_TRAP_ID_LLDP = 0x13,
	MLXSW_TRAP_ID_MMRP = 0x14,
	MLXSW_TRAP_ID_MVRP = 0x15,
	MLXSW_TRAP_ID_RPVST = 0x16,
	MLXSW_TRAP_ID_DHCP = 0x19,
	MLXSW_TRAP_ID_IGMP_QUERY = 0x30,
	MLXSW_TRAP_ID_IGMP_V1_REPORT = 0x31,
	MLXSW_TRAP_ID_IGMP_V2_REPORT = 0x32,
	MLXSW_TRAP_ID_IGMP_V2_LEAVE = 0x33,
	MLXSW_TRAP_ID_IGMP_V3_REPORT = 0x34,
	MLXSW_TRAP_ID_ARPBC = 0x50,
	MLXSW_TRAP_ID_ARPUC = 0x51,
	MLXSW_TRAP_ID_MTUERROR = 0x52,
	MLXSW_TRAP_ID_TTLERROR = 0x53,
	MLXSW_TRAP_ID_LBERROR = 0x54,
	MLXSW_TRAP_ID_OSPF = 0x55,
	MLXSW_TRAP_ID_IP2ME = 0x5F,
	MLXSW_TRAP_ID_RTR_INGRESS0 = 0x70,
	MLXSW_TRAP_ID_BGP_IPV4 = 0x88,
	MLXSW_TRAP_ID_HOST_MISS_IPV4 = 0x90,

	MLXSW_TRAP_ID_MAX = 0x1FF
};

enum mlxsw_event_trap_id {
	/* Port Up/Down event generated by hardware */
	MLXSW_TRAP_ID_PUDE = 0x8,
};

#endif /* _MLXSW_TRAP_H */
