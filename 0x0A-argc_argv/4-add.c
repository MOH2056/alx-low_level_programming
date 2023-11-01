#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - it is a function
 * @argc: parameter
 * @argv: pointer
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num, i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		int is_positive = 1;

		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		if (is_positive)
		{
			num = atoi(argv[i]);
			if (num > 0)
			{
				sum += num;
			}
		}
		else
		{
			printf("%s\n", argv[i]);
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}
