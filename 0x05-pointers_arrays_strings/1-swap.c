#include "main.h"
/**
 * swap_int - this function is to swap
 * @a: parameter1
 * @b:parameter2
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
