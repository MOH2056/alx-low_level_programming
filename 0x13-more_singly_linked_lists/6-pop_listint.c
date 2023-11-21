#include "lists.h"
/**
 * pop_listint - this is a function to delete
 * @head: parameter
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (*head == NULL)
		return (0);

	i = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (i);
}
