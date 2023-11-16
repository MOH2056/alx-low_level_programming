#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - this is a function
 * @h: parameter
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
