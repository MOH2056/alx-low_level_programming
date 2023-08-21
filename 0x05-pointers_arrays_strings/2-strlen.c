#include "main.h"
/**
 * _strlen - this function is to find length
 * @s: parameter
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;
	int c = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		c++;
	return (c);
}
