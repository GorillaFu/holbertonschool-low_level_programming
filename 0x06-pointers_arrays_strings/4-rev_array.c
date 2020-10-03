#include "holberton.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 *
 * @a: array
 * @n: n the number of elements in array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, copy;

	n = n - 1;
	while (i <= n)
	{
		copy = a[i];
		a[i++] = a[n];
		a[n--] = copy;
	}
}
