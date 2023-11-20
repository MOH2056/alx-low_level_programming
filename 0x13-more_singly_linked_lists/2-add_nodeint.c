#include "lists.h"
/**
 * add_nodeint - function
 * @head: parameter
 * @n: parameter1
 * Return: 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newone;

	newone = (listint_t *)malloc(sizeof(listint_t));

	if (newone == NULL)
	{
		return (NULL);
	}
	newone->n = n;
	newone->next = *head;
	*head = newone;
	return (*head);
}
