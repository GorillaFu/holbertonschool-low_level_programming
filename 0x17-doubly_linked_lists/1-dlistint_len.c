#include "lists.h"

/**
 * dlistint_len - function that counts doubly linked list elements
 * @h: starting node.
 * Return: num elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t i = 0;

	while (temp)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
