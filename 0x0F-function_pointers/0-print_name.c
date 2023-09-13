#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - this function prints name
 * @name: parameter
 * @f: pointer
 * Return: always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
