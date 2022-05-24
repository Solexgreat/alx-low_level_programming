#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *i)
{
	size_t num_element;

	num_element = 0;
	while (i != NULL)
	{
		if (i->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", i->len, i->str);
		i = i->next;
		num_element++;
	}
	return (num_element);
}
