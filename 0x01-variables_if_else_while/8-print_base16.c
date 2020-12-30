#include <stdio.h>

/**
 * main - Prints base16 digits w putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		putchar(i);
		if (i == 57)
			i = i + 39;
	}
	putchar('\n');
	return (0);
}
