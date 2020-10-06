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
	while (*s != c)
	{
		/*increment s. if s is null, ret 0 */
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
