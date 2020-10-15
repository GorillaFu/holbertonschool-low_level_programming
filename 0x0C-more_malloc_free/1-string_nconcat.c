#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: number of chars from s1 to concat to string 1
 *
 * Return: pointer char or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size1, size2, i, j;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = 0, size2 = 0;

	while (*(s1 + size1) != '\0')
		size1++;
	while (*(s2 + size2) != '\0')
		size2++;

	if (n < size2)
	{
		size2 = n;
	}

	string = malloc(size1 + size2 + 1);

	if (string == 0)
		return (NULL);

	for (i = 0; i < size1; i++)
	{
		*(string + i) = *(s1 + i);
	}
	for (j = 0; j < size2; j++)
	{
		*(string + i + j) = *(s2 + j);
	}

	*(string + size1 + size2 + 1) = '\0';

	return (string);
}
