#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @i: singly linked list.
 * Return: number of elements in the list.
 */

size_t list_len(const list_t *i)
{
	size_t num_element;

	num_element = 0;
	while (i != NULL)
	{
		i = i->next;
		num_element++;
	}
	return (num_element);
}
