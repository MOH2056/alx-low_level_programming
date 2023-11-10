#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - this is a function
 * @format: parameter
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int n = 0;
	va_list type;

	va_start(type, format);

	while (format && format[n])
	{
		switch (format[n])
		{
			case 'i':
				printf("%d, ", va_arg(type, int));
				break;
			case 'c':
				printf("%c, ", va_arg(type, int));
				break;
			case 'f':
				printf("%f, ", va_arg(type, double));
				break;
			case 's':
				printf("%s", va_arg(type, char *));
				break;

				if (va_arg(type, char *) == NULL)
				{
					printf("(nil)");
				}
				break;
		}
		n++;
	}
	va_end(type);
	printf("\n");
}
