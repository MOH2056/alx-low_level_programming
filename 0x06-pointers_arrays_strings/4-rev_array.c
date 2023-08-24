#include "main.h"
#include <stdio.h>
/**
 * reverse_array - this function is for reverse array
 * @a: parameter
 * @n: parameter1
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0 ; i < n-- ; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
