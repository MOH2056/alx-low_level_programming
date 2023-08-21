#include "main.h"
#include <stdio.h>
/**
 * print_rev - print string in reverse
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int d = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		d++;
	for (i = d - 1 ; i >= 0 ; i--)
		putchar(s[i]);
	putchar('\n');
}
