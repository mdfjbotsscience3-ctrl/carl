// SPDX-License-Identifier: MIT
// Co-authored-by: Claude

#ifndef CARL_MM_H
#define CARL_MM_H

#include <stddef.h> /* size_t */

void *carl_malloc(size_t size);
void carl_free(void *ptr);
void *carl_realloc(void *ptr, size_t size);

#endif