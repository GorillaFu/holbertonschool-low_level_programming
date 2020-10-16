#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * forLooperPooper - for loop separate from calloc so no void error
 * @ptr: pointer
 * @wrt: write
 * @size: size
 *
 * Return: pointer
 */

char *forLooperPooper(char *ptr, char wrt, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = wrt;
	}
	return (ptr);
}

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

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	pointer = malloc(nmemb * size);

	if (pointer == NULL)
	{
		return (NULL);
	}

	forLooperPooper(pointer, 0, nmemb * size);

        return (pointer);
}
