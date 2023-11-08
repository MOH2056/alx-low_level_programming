#include <stdio.h>
/**
 * print_name - this is a function
 * @name: parameter
 * @f: pointer
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
