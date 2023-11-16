#include "lists.h"
/**
 * add_node_end - function
 * @head: parameter1
 * @str: parameter
 * Return: 0
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newer;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	newer = malloc(sizeof(list_t));
	if (!newer)
		return (NULL);
	newer->str = strdup(str);
	newer->len = len;
	newer->next = NULL;

	if (*head == NULL)
	{
		*head = newer;
		return (newer);
	}

	while (temp->next)
		temp = temp->next;
	temp->next = newer;
	return (newer);
}
