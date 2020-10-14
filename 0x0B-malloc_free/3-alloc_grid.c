#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Write a function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @height: height of array
 * @width: width of array
 *
 * Return: Pointer or null
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (k = 0; k < width; k++)
		{
			grid[i][k] = 0;
		}
	}
	return (grid);
}
