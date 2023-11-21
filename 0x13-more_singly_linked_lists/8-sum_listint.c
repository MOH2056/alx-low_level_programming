#include "lists.h"
/**
 * sum_listint - sum function
 * @head: parameter
 * Return: 0
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}
	return (add);
}
