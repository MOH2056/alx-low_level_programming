#include "main.h"
/**
 * *_strcat - this function is to concatenate
 * @dest: parameter
 * @src: parameter1
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int destlen1 = 0;
	int srclen2 = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen1++;
	for (i = 0 ; src[i] != '\0' ; i++)
		srclen2++;
	for (i = 0 ; i <= srclen2 ; i++)
		dest[destlen1 + i] = src[i];
	return (dest);
}
