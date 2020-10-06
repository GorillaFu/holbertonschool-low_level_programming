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
		/*if *s is equal to zero, increment *s */
		if(!*s++)
		{
			/*no clue why this works????*/
			/*purpose of return statement mystery*/
			return (0);
		}
	}
	return (s);
}
