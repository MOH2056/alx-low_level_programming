#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - this is a function
 * @separator: parameter
 * @n: parameter
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *result;
	unsigned int i;
	va_list num;

	va_start(num, n);

	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		result = va_arg(num, char*);
		{
			if (result == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", result);
			}
			if (i < n - 1 && separator != NULL) 
			{
				printf("%s", separator);
			}
		}
	}
	va_end(num);
	printf("\n");
}
