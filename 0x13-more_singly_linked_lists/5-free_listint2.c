#include "lists.h"
/**
 * free_listint2 - function
 * @head: parameter
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}
