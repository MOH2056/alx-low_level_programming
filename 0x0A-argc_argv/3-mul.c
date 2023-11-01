#include <stdio.h>
#include <stdlib.h>
/**
 * main - it is a function
 * @argc: parameter
 * @argv: parameter1
 * Return: 0 if successful 1 if error
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
