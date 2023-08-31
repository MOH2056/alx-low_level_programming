#include <stdio.h>
#include "main.h"

/**
 * print_triangle - this function is to print triangle
 * @size: parameter
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 0 ; i < size ; i++)
		{
			for (j = size - i ; j > i ; j--)
			{
				putchar(32);
			}
			for (k = 0 ; k <= i ; k++)
			{
				putchar(35);
			}

			putchar('\n');
		}
	}
}
