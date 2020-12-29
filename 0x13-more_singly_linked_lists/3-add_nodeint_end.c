#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - add node 2 end
 * @head: head node
 * @n: data
 * Return: new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *prev = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (prev->next)
		prev = (prev)->next;
	prev->next = new;
	return (new);
}
