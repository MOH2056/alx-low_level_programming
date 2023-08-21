#include "main.h"
#include <stdio.h>
/**
 * _strcpy - this function is to copy string
 * @dest: parameter
 * @src: parameter2
 * Return: source
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
