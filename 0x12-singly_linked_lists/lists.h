#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_singly - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 **/

typedef struct list_singly
{
	char *str;
	unsigned int len;
	struct list_singly *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **list_head, const char *str);
list_t *add_node_end(list_t **list_head, const char *str);
void free_list(list_t *list_head);

#endif
