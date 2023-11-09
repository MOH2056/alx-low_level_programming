#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - this is a function
 * @separator: parameter
 * @n: parameter1
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int result, i;
	va_list number;

	va_start(number, n);
	if (separator == NULL)
        {
                return;
        }

	for (i = 0; i < n; i++)
	{
		result = va_arg(number, unsigned int);

		printf("%d", result);
		if (i < n - 1)
		{
			printf("%s", separator);
		}
		va_end(number);
	}
	printf("\n");
}
