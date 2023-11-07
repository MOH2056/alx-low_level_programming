#include <stdio.h>
#include "dog.h"
/**
 * print_dog - this is a function
 * @d: parameter
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
	else
	{
		printf("nil");
	}
}
