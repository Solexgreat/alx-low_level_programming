#include "lists.h"

/**
 * pop_listint - deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;
	listint_t *h;


	if (*head == NULL)
		return (0);

	temp = *head;

	i = temp->n;
	h = temp->next;
	free(temp);
	*head = h;

	return (i);
}
