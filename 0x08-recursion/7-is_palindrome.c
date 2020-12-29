#include "holberton.h"

/**
 * strlen - finds length of string recursively
 * @s: string
 *
 * Return: length of string
 */

int strlen(char *s)
{
	if (*s != '\0')
	{
		return (1 + strlen(s + 1));
	}
	return (0);

}

/**
 * checkPali - checks if palindrom by comparing opposite chars
 * @s: string
 * @len: string length
 *
 * Return: 1 if palindrome else 0
 */
int checkPali(char *s, int len)
{
	if (len <= 0)
	{
		return (1);
	}
	if (*s == *(s + (len - 1)))
	{
		return (checkPali(s + 1, len - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - checks if palindrome
 * @s: string
 *
 * Return: Always 0.
 */
int is_palindrome(char *s)
{
	int len;

	len = strlen(s);
	return (checkPali(s, len));
}
