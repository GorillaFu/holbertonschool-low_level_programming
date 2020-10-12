#include "holberton.h"
#include <stdio.h>

/**
 * main - prints contents of argv
 * @argc: num of command line arguments
 * @argv: array containing the command line arguments.
 *
 * Return: Nothing.
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
