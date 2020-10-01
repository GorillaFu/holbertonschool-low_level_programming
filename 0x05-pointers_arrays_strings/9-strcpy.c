#include "holberton.h"

/**
 * _strcpy - copy array to another array.
 * @dest: Blank array
 * @src: - array copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);

}
