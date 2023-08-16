#include "main.h"
/**
 * print_last_digit - print last digit
 *@i: parameter
 * Return: always 0
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
