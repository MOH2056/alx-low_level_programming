#include <stdio.h>
/**
 * factorial - this function is to return factorial of a given number
 * @n: parameter
 * Return: always 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
