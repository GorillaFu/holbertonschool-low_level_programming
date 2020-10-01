#include "holberton.h"

/**
 * rev_string - print string in reverse
 * @s: pointer of string
 * Return: Void
 */
void rev_string(char *s)
{
	int i = 0, a = 0, Storage;


	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > a)
	{
		Storage = s[i];
		s[i--] = s[a];
		s[a++] = Storage;
	}
}
