#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - Removing the element at index from a list.
 *
 * @head: pointer fist node in array
 * @index: elemtn to remove
 * Return: Val in removed  node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node = head;

	if (head == NULL)
	{
		return (0);
	}

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		node = head->next;
		head = node;
		++i;
	}
	return (node);
}
