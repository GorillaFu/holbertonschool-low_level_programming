#include "holberton.h"

/**
 * print_binary - prints int as binary
 * @n: int in decimal
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int i, j, first = 0, count = sizeof(n) * 8 - 1;
	long int num = n;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = count; i >= 0; i--)
	{
		num = n >> i;
		j = (num) & 1;
		if (first || j)
		{
			if (j == 1)
				_putchar('1');
			else
				_putchar('0');
			first = 1;
		}

	}
}
