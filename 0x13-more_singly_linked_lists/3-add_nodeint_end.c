#include "lists.h"
/**
 * add_nodeint_end - function
 * @head: parameter
 * @n: value
 * Return: 0
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newone;
	listint_t *end;

	newone = (listint_t *)malloc(sizeof(listint_t));
	newone->n = n;
	newone->next = NULL;
	if (*head == NULL)
	{
		*head = newone;
		return (newone);
	}
	while (end->next != NULL)
		end = end->next;
	end->next = newone;
	return (newone);
}
