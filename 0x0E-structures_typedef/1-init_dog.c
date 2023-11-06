#include <stdio.h>
#include <string.h>
/**
 * init_dog - this is a function
 * @d: pointer
 * @name:pointer 1
 * @age: parameter
 * @owner: parameter2
 * Return: o
 */
struct dog {
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	strncpy(d->name, name, sizeof(d->name) - 1);
	d->age = age;
	strncpy(d->owner, owner, sizeof(d->owner) - 1);
}
