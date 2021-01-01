#include <stdio.h>
#include "holberton.h"

/**
 * binary_to_uint - convert binary code to unsigned int
 * @b: binary string
 * Return: decimal or 0 if fail
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;

	decimal = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		decimal = decimal << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			decimal = decimal | 1;
		b++;
	}
	return (decimal);
}
