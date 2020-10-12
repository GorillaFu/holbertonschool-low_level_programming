#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies contents of argv
 * @argc: num arguments
 * @argv: arrayof line arguments.
 *
 * Return: zero!
 */
int main(int argc, char *argv[])
{
	/*multiplication result*/
	int mul = 1;

	if (argc == 3)
	{
		mul *= atoi(argv[argc - 2]);
		mul *= atoi(argv[argc - 1]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
