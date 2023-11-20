#include "lists.h"
/**
 * free_listint - function
 * @head: parameter
 * Return:  0
 */
void free_listint(listint_t *head)
{
	listint_t *fee;

	while (head != NULL)
	{
		fee = head;
		head->next = fee;
		free(fee);
	}
}
