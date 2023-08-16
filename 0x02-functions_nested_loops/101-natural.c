#include <stdio.h>
/**
 * main -  this is a function on multiples
 *
 * Return: always 0
 */
int main(void)
{
	int add = 0;
	int i;

	for  (i = 0 ; i < 1024 ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			add = add + i;
	}
	printf("%d\n", add);
	return (0);
}
