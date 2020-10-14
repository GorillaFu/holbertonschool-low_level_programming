#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char
 * @size: size of array
 * @c: char
 *
 * Return: Pointer str or 0 if fail
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	/*if size = 0, array cannot be created*/
	if (size == 0)
	{
		return (0);
	}

	/*allocate size spaces in pointer str*/
	str = malloc(size);

	/*if str = zero, fail. ret 0*/
	if (str == 0)
	{
		return (0);
	}
	/*traverse str, set each space to char c*/
	for (i = 0; i < size; i++)
	{
		*(str + i) = c;
	}
	/*add null char to end*/
	*(str + i) = '\0';

	return (str);
}
