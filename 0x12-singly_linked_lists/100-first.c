#include <stdio.h>
void any(void) __attribute__ ((constructor));
/**
 * any - function
 * Return: oid
 */
void any(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
