#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
typedef struct list_box
{
	char *str;
	unsigned int len;
	struct list_box *next;
} list_t;
size_t print_list(const list_t *h);
#endif
