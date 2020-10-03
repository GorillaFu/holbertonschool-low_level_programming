#include "holberton.h"

/**
 * _strcmp - function that copies a string.
 *
 * @s1: string 1
 * @s2: string 2
 * Return: v
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
