#include "holberton.h"

/**
 * rot13 - encode string w ROT13.
 *
 * @str: str is array
 *
 * Return: string
 */
char *rot13(char *str)
{
	int i = 0, j;
	char s[] =  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s1[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (; str[i] != '\0'; i++)
	{
		for (j = 0; j <= 51; j++)
		{
			if (s[j] == str[i])
			{
				str[i] = s1[j];
			}
		}
	}
	return (str);
}
