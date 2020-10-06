#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: da byte 2 write
 * @n: size uv da memory
 * Return: pointer 2 da memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	/* use unsigned int i for successful math w n*/
	unsigned int i;

	/*for loop traverses length of memory area, defined by n*/
	for (i = 0; i < n; i++)
	{
		/*the char at s plus i is set equal to char b*/
		*(s + i) = b;
	}
	return (s);
}
