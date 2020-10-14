#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str *_str_concat - concatenates 2 strings
 *@s1: string 1
 *@s2: string 2
 *Return: pointer to concatenated str, or 0 if fail.
 */

char *str_concat(char *s1, char *s2)
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

	string = malloc(size1 + size2 + 1);

	if (string == 0)
		return (0);

	for (i = 0; i < size1; i++)
	{
		*(string + i) = *(s1 + i);
	}
	for (j = 0; j < size2; j++)
	{
		*(string + i + j) = *(s2 + j);
	}
	*(string + i + j + 1) = '\0';

	return (string);
}
