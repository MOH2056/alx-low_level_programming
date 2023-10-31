#include <stdio.h>
/**
 * main - this is a function
 * @x: parameter
 * @y: pointer
 * Return: 0
 */
int main(int x, char *y[])
{
	if (x <= 10)
	{
		printf("%s\n%s\n%s\n%s\n", y[0], y[1], y[2], y[3]);
		printf("%s\n%s\n%s\n%s\n", y[4], y[5], y[6], y[7]);
	}
	return (0);
}
