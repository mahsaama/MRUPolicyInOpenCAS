/*
 * Copyright(c) 2012-2020 Intel Corporation
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */
#ifndef __EVICTION_MRU_H__
#define __EVICTION_MRU_H__

#include "eviction.h"
#include "mru_structs.h"

struct ocf_user_part;

void evp_mru_init_cline(struct ocf_cache *cache, ocf_cache_line_t cline);
void evp_mru_rm_cline(struct ocf_cache *cache, ocf_cache_line_t cline);
bool evp_mru_can_evict(struct ocf_cache *cache);
uint32_t evp_mru_req_clines(struct ocf_cache *cache, ocf_queue_t io_queue,
		struct ocf_user_part *part, uint32_t cline_no);
void evp_mru_hot_cline(struct ocf_cache *cache, ocf_cache_line_t cline);
void evp_mru_init_evp(struct ocf_cache *cache, struct ocf_user_part *part);
void evp_mru_dirty_cline(struct ocf_cache *cache, struct ocf_user_part *part,
		uint32_t cline);
void evp_mru_clean_cline(struct ocf_cache *cache, struct ocf_user_part *part,
		uint32_t cline);

#endif
