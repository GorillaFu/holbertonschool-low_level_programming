#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - prints input as provided and in all caps
 * @name: name
 * @f: print original name and name in uppercase
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
