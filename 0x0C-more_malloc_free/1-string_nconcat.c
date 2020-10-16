#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - function tht returns length of string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}

	return (i);
}
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
	unsigned int size1, size2, i ,j;
	char *string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (size2 > n)
	{
		size2 = n;
	}

	string = malloc(size1 + size2 + 1);

	if (string == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size1; i++)
	{
		*(string + i) = *(s1 + i);
	}

	for (j = 0; j < size2; j++)
	{
		*(string + (j + size1)) = *(s2 + j);
	}
	*(string + (j + size1)) = '\0';
	return (string);
}
