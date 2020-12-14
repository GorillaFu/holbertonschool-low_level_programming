#include "lists.h"

/**
 * free_dlistint - function that free a dbly linked list.
 * @head: node
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
	free(head);
}
