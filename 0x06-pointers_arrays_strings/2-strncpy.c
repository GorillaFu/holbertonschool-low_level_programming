#include "holberton.h"

/**
 * _strncpy - function that copies a string.
 * @n: size of character to contatenate
 * @dest: string 1
 * @src: string 2
 * Return: string pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
