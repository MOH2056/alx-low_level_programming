#include "lists.h"
/**
 * pop_listint - this is a function to delete
 * @head: parameter
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node;

	if (*head == NULL)
		return (0);

	node = *head;
	*head = (*head)->next;
	free(node);

	return (0);
}
