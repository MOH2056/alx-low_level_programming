#include <stdio.h>
#include <string.h>
#include "dog.h"
/**
 * init_dog - this is a function
 * @d: pointer
 * @name:pointer 1
 * @age: parameter
 * @owner: parameter2
 * Return:0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
