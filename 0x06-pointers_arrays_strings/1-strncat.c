#include "holberton.h"

/**
 * _strncat -  function that concatenates two strings.
 * @n: size of string to contatenate
 * @dest: string 1
 * @src: string 2
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
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

	while (s <= j)
	{
		if (n > 0)
		{
			dest[i] = src[k];
			k++;
			i++;
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
