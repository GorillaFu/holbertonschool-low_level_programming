#include <stdio.h>

/**
 * main - Prints alphabet in upper and lower case
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
		if (i == 122)
			i = i - 58;
		if (i == 90)
			break;
	}
	putchar('\n');
	return (0);
}
