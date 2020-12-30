#include <stdio.h>

/**
 * main - Prints decimal digits w comma and spaces
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (56 > i)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
