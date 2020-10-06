#include "holberton.h"

/**
 * _strstr - finds substring in string
 * @haystack: string
 * @needle: sub
 *
 * Return: first occurence of substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j, k;

	while (*(haystack + i) != '\0')
	{
		k = i;
		j = 0;
		while (*(needle + j) == *(haystack + i) && *(haystack + i) != '\0'
		       && *(haystack + i) != '\0')
		{
			i++;
			j++;
		}
		if (*(needle + j) == '\0')
		{
			return (haystack + k);
		}
		i = k + 1;
	}
	return (0);
}
