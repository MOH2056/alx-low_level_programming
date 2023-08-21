#include "main.h"
#include <stdio.h>
/**
 * _atoi - this function is to convert string to integer
 * @s: parameter
 * Return: 0
 */
int _atoi(char *s)
{
	int i, d, n, len, e, j;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	e = 0;
	j = 0;

	while (s[len] != '\0')
		len++;
	while (i < len && e == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			j = s[i] - '0';
			if (d % 2)
				j = -j;
			n = n * 10 + j;
			e = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			e = 0;
		}
		i++;
	}
	if (e == 0)
	return (0);
	return (n);
}
