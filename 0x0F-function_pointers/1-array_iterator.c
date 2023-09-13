#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - this is a function
 * @array: parameter1
 * @size: parameter2
 * @action: parameter3
 * REturn: always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
