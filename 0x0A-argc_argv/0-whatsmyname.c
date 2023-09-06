#include <stdio.h>
#include "main.h"

/**
 * main - this is a funtion that prints the name of the program
 * @argc: parameter1
 * @argv: parameter2
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

