#include <stdio.h>
/**
 * main - this is a function
 * @x: parameter
 * @y: pointer
 * Return: 0
 */
int main(int x, char *y[])
{
	int i;

	for (i = 0; i < x; i++)
	{
		printf("%s\n", y[i]);
	}
	return (0);
}
