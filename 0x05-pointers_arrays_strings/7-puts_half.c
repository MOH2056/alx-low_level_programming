#include "main.h"
#include <stdio.h>
/**
 * puts_half - print second half
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i, k, d = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		d++;
	k = (d - 1) / 2;
	for (i = k + 1 ; str[i] != '\0' ; i++)
		putchar(str[i]);
	putchar('\n');
}
