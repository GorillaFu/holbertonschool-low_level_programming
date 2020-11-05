#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - free list and also set ehad to null
 *
 * @head: first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!(head && *head))
		return (0);
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
