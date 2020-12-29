#include "holberton.h"

/**
 * _pow_recursion - returns an int to the power of another int
 * @x: base
 * @y: exponent
 *
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
