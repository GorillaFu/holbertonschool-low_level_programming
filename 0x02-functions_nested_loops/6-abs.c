#include "holberton.h"

/**
 * _abs - returns absolute value of an int
 *@n:input
 *
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
