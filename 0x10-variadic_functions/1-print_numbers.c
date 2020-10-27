#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print all arguments on a new line.
 * @n: number of arguments
 * @separator: character separator between nums
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numberlist;
	unsigned int i;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(numberlist, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numberlist, int));
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(numberlist);
}
