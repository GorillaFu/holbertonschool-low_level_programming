#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two numbers
 * @a: first number
 * @b: second number
 *
 * Return: sum of a and b.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub two numbers
 * @a: first number
 * @b: second number
 *
 * Return: result of a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a / b.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - remainder of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: a % b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
