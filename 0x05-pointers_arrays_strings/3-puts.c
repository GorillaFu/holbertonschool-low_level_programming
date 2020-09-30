#include "holberton.h"

/**
 * _puts - prints each char in string then new line
 * @str: pointer for string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
