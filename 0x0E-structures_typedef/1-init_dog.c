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
	strncpy(d->name, name,sizeof(d->name) - 1);
	d->age = age;
	strncpy(d->owner, owner, sizeof(d->name) - 1);
}
