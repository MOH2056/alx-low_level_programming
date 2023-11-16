#include "lists.h"
/**
 * add_node - function
 * @head: parameter
 * @str: parameter1
 * Return: 0
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newone;
	unsigned int len = 0;

	while (str[len])
		len++;
	newone = malloc(sizeof(list_t));
	if (!newone)
		return (NULL);
	newone->str = strdup(str);
	newone->len = len;
	newone->next = (*head);
	(*head) = newone;

	return (*head);
}
