#include "main.h"
/**
 * _puts - function
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
