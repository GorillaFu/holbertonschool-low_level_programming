#include "holberton.h"
#include <stdio.h>

/**
 * main - prints argc
 * @argc: number of command line arguments
 * @argv: the program command line arguments.
 *
 * Return: Nothing.
 */
int main(int argc, char *argv[])
{
	int count;

	(void)argv;
	for (count = 0; count < argc; count++)
	{
		if (count + 1 == argc)
			printf("%i\n", count);
	}
	return (0);
}
