#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print contents of nodes in linked list
 * @h: pointer to node
 * Return: number of elements.
 */
size_t print_list(const list_t *h)
{
	int counter;
	counter = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
