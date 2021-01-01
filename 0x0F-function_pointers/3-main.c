#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function for calc
 * @argc: arguemnts
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int (*check)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
                exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	check = get_op_func(argv[2]);
	if (check == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(num1, num2));
	return (0);
}
