#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @list_h: list_h of the linked list.
 * @str: string to store in the list.
 * Return: address of the list_head.
 */

list_t *add_node(list_t **list_h, const char *str)
{
	size_t nchar;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	new->len = nchar;
	new->next = *list_h;
	*list_h = new;

	return (*list_h);
}
