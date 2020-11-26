#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: array of elements
 * @size: size of an array
 * @cmp: pointer to a func that compares ints
 * Return: index of array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0 && cmp != NULL &&  array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
