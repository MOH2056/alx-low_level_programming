#include "main.h"
#include <stdio.h>

/**
 * set_bit - function
 * @n: pointer
 * @index: parameter
 * Return: 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
