#include "lists.h"

/**
 * free_list - frees a list
 * @list_head: list_head of the linked list.
 * Return: no return.
 */

void free_list(list_t *list_head)
{
	list_t *cur;

	while ((cur = list_head) != NULL)
	{
		list_head = list_head->next;
		free(cur->str);
		free(cur);
	}
}
