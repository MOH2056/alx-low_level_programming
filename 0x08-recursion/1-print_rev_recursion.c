#include <stdio.h>
/**
 * _print_rev_recursion - this is a function used to print a string in reverse
 * @s: parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
