#include <stdio.h>

/**
 * main - this is a function
 *
 * Return: always 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			if (i * j != 81)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
