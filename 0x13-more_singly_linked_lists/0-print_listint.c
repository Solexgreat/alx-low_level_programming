#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */

size_t print_listin(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("/n %i", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
