#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - finds c in string s
 * @s: string pointer
 * @c: char searched for
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;
	while (s[i] != '\0')
	{
		/*if *s is equal to zero, increment *s */
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}
	return (0);
}
