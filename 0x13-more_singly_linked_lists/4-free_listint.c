#include "lists.h"
/**
 * free_listint - function
 * @head: parameter
 * Return:  0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
