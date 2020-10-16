#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memoy for an array using malloc
 * @nmemb: number of elements
 * @size: the amount of bytes per element
 *
 * Return: pointer to memory or null if fail
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointer;
	int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
	{
		return (NULL);
	}

        for (i = 0; i < (nmemb * size); i++)
	{
		*(pointer + i) = 0;
	}

	return (pointer);
}
