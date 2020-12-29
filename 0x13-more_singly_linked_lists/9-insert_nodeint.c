#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at indx.
 *
 * @head: first node
 * @idx: index to insert at
 * @n: value
 * Return: Value of a node index.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 1;
	listint_t *node = *head;
	listint_t *insert;
	listint_t *copy = *head;

	if (head == NULL)
		return (NULL);
	while (i < idx)
	{
		if ((*head)->next == NULL)
			return (NULL);
		node = (*head)->next;
		*head = node;
		++i;
	}
	insert = malloc(sizeof(listint_t));

	if (insert == NULL)
		return (NULL);
	insert->n = n;
	if (idx == 0)
	{
		insert->next = *head;
		*head = insert;
	}
	else
	{
		insert->next = (*head)->next;
		(*head)->next = insert;
		*head = copy;
	}
	return (insert);
}
