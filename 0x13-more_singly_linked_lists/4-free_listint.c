#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free da list
 *
 * @head: A pointer to the first node
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
