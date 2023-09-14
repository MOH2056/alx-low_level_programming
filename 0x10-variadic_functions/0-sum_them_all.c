#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - this function is to sum all its parameters
 * @n: parameter
 * @...: parameter1
 * Return: always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
