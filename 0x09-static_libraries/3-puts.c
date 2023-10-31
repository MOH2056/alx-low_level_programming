#include "main.h"
#include <stdio.h>
/**
 * _puts - this is a function
 * @s: parameter
 * Return: 0
 */
void _puts(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		putchar(s[i]);
	putchar('\n');
}
