#include "holberton.h"

/**
 * rootcheck - searches for sqrt of x starting at y
 * @x: number
 * @y: root
 * Return: sqrt of x or -1
 */

int rootcheck(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (rootcheck(x, y + 1));
}

/**
 * _sqrt_recursion - finds sqrt of n
 * @n: number
 *
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (rootcheck(n, 0));
}
