#include "lists.h"
/**
 * list_len - function
 * @h: parameter
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
