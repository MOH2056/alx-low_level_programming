#include <stdio.h>
#include "main.h"

/**
 * main - this function is to print the number of arguments passed into it
 * @argc: parameter
 * @argv: parameter1
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
