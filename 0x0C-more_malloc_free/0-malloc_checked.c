#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: amount of space in pointer
 *
 * Return: pointer to memory or 98 if null
 */

void *malloc_checked(unsigned int b)
{
	char *p;
	int castint = (int) b;
	p = malloc(4 * b);

	if (p == 0)
	{
		return (98);
	}
	else
	{
		return(p);
	}
}
