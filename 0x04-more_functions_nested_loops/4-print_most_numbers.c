#include "holberton.h"
/**
 * print_most_numbers - print numbers from 0 -9 excluding 2 and 4
 * Return: the sequence
 */
void print_most_numbers(void)
{

	for (int i = '0'; i <= '9'; i++)
	{
		if (!(i == '2' || i == '4'))
			_putchar(i);
	}
	_putchar('\n');
}
