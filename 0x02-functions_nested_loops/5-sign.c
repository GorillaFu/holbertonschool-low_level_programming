#include "holberton.h"

/**
 * print_sign - checks value and prints+returns positive or negative
 *
 * Return: 1, -1 or 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
