#include <stdio.h>
/**
 *_puts_recursion - this function is for string print
 * @s: parameter
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
