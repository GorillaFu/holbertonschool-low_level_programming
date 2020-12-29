#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node in the index list.
 *
 * @head: first nodein list
 * @index: index.
 * Return: 1 or -1.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint_t *final;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}

	while (i < index - 1)
	{
		temp = temp->next;
		++i;
		if (!temp)
			return (-1);
	}

	final = temp->next->next;
	free(temp->next);
	temp->next = final;
	return (1);
}
