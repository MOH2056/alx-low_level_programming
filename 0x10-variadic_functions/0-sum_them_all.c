#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - this is a function
 * @n: parameter
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int result = 0;
	unsigned int a;
	va_list number;

	va_start(number, n);

	if (n == 0)
	{
		return (0);
	}
	for (a = 0; a < n; a++)
	{
		result = result + va_arg(number, unsigned int);
	}
	va_end(number);
	return (result);
}
