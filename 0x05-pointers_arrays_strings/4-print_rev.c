#include "holberton.h"

/**
 * print_rev - print reverse characters.
 * @s: pointer of string 
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (i = i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
