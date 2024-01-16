#include "main.h"
/**
 * _strlen - function
 * @s: parameter
 * Return: 0
 */
int _strlen(char *s)
{
	int i;
	int c = 0;
	
	for (i = 0 ; s[i] != '\0' ; i++)
		c++;
	return (c);
}
