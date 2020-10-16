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
	int *numarray;
	int size, mincount, i;
	if (min > max)
		return (NULL);

	size = (max - min)+1;

	numarray = malloc(size);

	if (numarray == 0)
		return (NULL);

	mincount = min;
	for(i = 0; i < size; i++)
	{
		*(numarray +i) = mincount;
		mincount++;
	}

	return (numarray);
}
