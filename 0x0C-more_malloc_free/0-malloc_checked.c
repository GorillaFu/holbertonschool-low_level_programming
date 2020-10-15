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
	void *string;
	string = malloc(b);

	if (string == NULL)
	{
		exit(98);
	}
	return(string);
}
