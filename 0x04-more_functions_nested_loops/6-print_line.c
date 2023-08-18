#include "main.h"
#include <stdio.h>
/**
 * print_line - this function is to print lines
 * @n: parameter
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			putchar('_');
		putchar('\n');
	}
}
