#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * listint_len - to  return number of element
 * @h: parameter
 * Return: 0
 */
size_t listint_len(const listint_t *h)
{
	size_t s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
