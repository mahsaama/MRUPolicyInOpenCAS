/*
 * Copyright(c) 2012-2020 Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */
#ifndef __EVICTION_MRU_STRUCTS_H__

#define __EVICTION_MRU_STRUCTS_H__

struct mru_eviction_policy_meta {
	/* MRU pointers 2*4=8 bytes */
	uint32_t prev;
	uint32_t next;
} __attribute__((packed));

struct ocf_mru_list {
	uint32_t num_nodes;
	uint32_t head;
	uint32_t tail;
};

struct mru_eviction_policy {
	struct ocf_mru_list clean;
	struct ocf_mru_list dirty;
};

#endif
