#include "lists.h"

/**
 * print_listint - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 * Return: numbers of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%u\n",h->n);
		h = h->next;
		num++;
	}
	return (num);
}
