#include "lists.h"
/**
 * listint_len - function
 * @h: parameter
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
