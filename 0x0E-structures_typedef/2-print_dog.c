#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints struct dog
 * @d: parameter
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("name:%s\n", (d->name) ? d->name : "nil");
		printf("age:%f\n", (d->age) ? d->age : 0);
		printf("owner:%s\n", (d->owner) ? d->owner : "nil");
	}
}
