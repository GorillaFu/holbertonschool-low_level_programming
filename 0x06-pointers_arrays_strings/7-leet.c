#include "holberton.h"

/**
 * leet - Function that replaces certain letters w numbers.
 *
 * @str: array
 *
 * Return: str
 */
char *leet(char *str)
{
	int i, k;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (k = 0; k <= 9; k++)
		{
			if (s[k] == str[i])
			{
				str[i] = s1[k];
			}
		}
	}
	return (str);
}
