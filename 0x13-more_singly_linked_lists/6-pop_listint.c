#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - Removing the first item of a list.
 *
 * @head: first node
 *
 * Return: addres of deletec node
 */
int pop_listint(listint_t **head)
{
	int val = 0;
	listint_t *next_node = NULL;

	if (*head == NULL)
	{
		return (0);
	}

	next_node = (*head)->next;
	val = (*head)->n;
	free(*head);
	*head = next_node;

	return (val);
}
