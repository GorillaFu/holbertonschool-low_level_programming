#include "holberton.h"

/**
 * _strspn - gets length of prefix substring
 * @s: string 1
 * @accept: string 2
 *
 * Return: Nothing.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	/* for loop traverses length of s*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/* for loops traverses length of accept*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			/*if chars of s and accept match, break from loop */
			if (s[i] == accept[j])
				break;
		}
		
		if (!(accept[j]))
			break;
	}
	return (i);
}
