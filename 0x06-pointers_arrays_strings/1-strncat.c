#include "main.h"
#include <string.h>
/**
 * *_strncat - this function is to concatenate
 * @dest: parameter
 * @src: parmeter1
 * @n: parameter2
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int len2 = strlen(dest);
	int i;

	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[len2 + i] = *src;
		src++;
	}
	dest[len2 + i] = '\0';
	return (dest);
}
