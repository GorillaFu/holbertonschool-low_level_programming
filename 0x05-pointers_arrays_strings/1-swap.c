#include "holberton.h"

/**
 * swap_int - swap the value of a and b.
 * @a : pointer of int a
 * @b : pointer of int b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
