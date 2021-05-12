#ifndef __PMM_H__
#define __PMM_H__

#include <stdint.h>
#include "init/stivale2.h"
#include <stddef.h>

void init_pmm(struct stivale2_struct* bootinfo);
void init_bitmap(size_t size, void* buffer);

void lock_page(void* address);
void lock_pages(void* address, uint64_t count);

void free_page(void* address);
void free_pages(void* address, uint64_t count);

void reserve_page(void* address);
void reserve_pages(void* address, uint64_t count);

void unreserve_page(void* address);
void unreserve_pages(void* address, uint64_t count);

void early_reserve_page(void* address);
void early_reserve_pages(void* address, uint64_t count);

void* request_page();

uint64_t get_total_memory();
uint64_t get_free_memory();
uint64_t get_usable_memory();
uint64_t get_used_memory();
uint64_t get_reserved_memory();

#endif