#include <stdio.h>
/**
 * _strlen_recursion - this is to return length of string
 * @s: parameter
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}