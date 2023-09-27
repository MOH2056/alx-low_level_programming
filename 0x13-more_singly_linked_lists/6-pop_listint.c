#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * pop_listint - this is a function
 * @head: parameter
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
