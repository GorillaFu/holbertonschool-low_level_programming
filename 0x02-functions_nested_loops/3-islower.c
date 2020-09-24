#include "holberton.h"

/**
 * _islower - prints a to z
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
