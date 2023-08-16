#include <stdio.h>
/**
 * main - this is a function
 *
 * Return: always 0
 */
int main(void)
{
	int limit = 4000000;
	int num1 = 1;
	int num2 = 2;
	int next;
	int add = 2;

	while (next <= limit)
	{
		next = num1 + num2;
		if (next % 2 == 0)
			add = add + next;
		num1 = num2;
		num2 = next;
	}
	printf("%d\n", add);
	return (0);
}
