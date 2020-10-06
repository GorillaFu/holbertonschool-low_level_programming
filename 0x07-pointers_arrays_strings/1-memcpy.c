#include "holberton.h"

/**
 * _memcpy - copies memory area from src to dest
 * @src: mem area to be copied
 * @dest: mem area to b overwritten
 * @n: size of mem areas
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	/*for loop traverses the length of the memory area*/
	for (i = 0; i < n; i++)
	{
		/*the 1st digit of dest memory area plus i is replaced by src*/
		*(dest + i) = *(src + i);
	}
	return (dest);
}
