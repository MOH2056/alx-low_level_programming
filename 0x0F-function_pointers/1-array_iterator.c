#include <stdio.h>
/**
 * array_iterator - this is a function
 * @action: pointer
 * @array: parameter
 * @size: parameter1
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	for (a = 0; a < size; a++)
		action(array[a]);
}
