#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create an array of ints
 * @min: minimum
 * @max: maximum
 *
 * Return: pointer to int or NULL.
 */
int *array_range(int min, int max)
{
	int *numarray, i;

	if (min > max)
	{
		return (NULL);
	}

	numarray = malloc(sizeof(int) * (max - min + 1));

	if (numarray == NULL)
	{
		return (NULL);
	}

	for(i = 0; min <= max; i++; min++)
	{
		*(numarray + i) = min;
	}

	return (numarray);
}
