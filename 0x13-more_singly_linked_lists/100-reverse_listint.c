#include "lists.h"
/**
 * reverse_listint - function
 * @head: parameter
 * Return: 0
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	while (*head)
	{
		next = (*head)->next
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
