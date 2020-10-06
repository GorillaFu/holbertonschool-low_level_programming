#include "holberton.h"

/**
 * _strpbrk - searches string for set of bytes
 * @s: set of bytes
 * @accept: string
 *
 * Return: pointer to the byte s that matches bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (0);
}
