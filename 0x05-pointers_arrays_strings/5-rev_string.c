#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse a string
 * @s: parameter
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int d = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		d++;
	for (i = 0 ; i < d / 2 ; i++)
	{
		char k;

		k = s[i];
		s[i] = s[d - 1 - i];
		s[d - 1 - i] = k;
	}
}
