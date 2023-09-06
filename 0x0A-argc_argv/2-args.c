#include <stdio.h>
#include "main.h"

/**
 * main - this function  prints all arguments it receives
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
