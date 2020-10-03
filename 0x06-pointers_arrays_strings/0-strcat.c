#include "holberton.h"

/**
 * _strcat -  function that attaches two strings
 * @dest: string to be added to
 * @src: string to be copied
 * Return:  pointer dest.
 */

char *_strcat(char *dest, char *src)
{

	int i = 0, j = 0, k = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	while (k <= j)
	{
		dest[i] = src[k];
		k++;
		i++;
	}
	return (dest);
}
