#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dl list
 * @head: node
 * @n: node data
 * Return: node added
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, const int
 n)
{
	unsigned int i = 1;
	dlistint_t *node = NULL, *temp, *last;

	if (h == NULL)
		return (NULL);
	temp = *h;
	last = *h;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = temp;
		node->prev = NULL;
		if (temp != NULL)
			temp->prev = node;
		*h = node;
		return (node);
	}
	while (temp != NULL)
	{
		last = temp;
		temp = temp->next;
		if (i == idx)
		{
			node->next = temp;
			node->prev = last;
			if (temp != NULL)
				temp->prev = node;
			last->next = node;
			return (node);
		}
		i++;
	}
	free(node);
	return (NULL);
}
