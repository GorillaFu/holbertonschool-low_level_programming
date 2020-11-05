#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements.
 * @h: name of the liss
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{

	if (h)
	{
		return (1 + listint_len(h->next));
	}
	else
	{
		return (0);
	}
	return (0);
}
