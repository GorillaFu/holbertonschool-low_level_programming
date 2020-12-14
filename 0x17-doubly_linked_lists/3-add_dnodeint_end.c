#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dl list
 * @head: node
 * @n: node data
 * Return: node added
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	*temp = *head;
	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		node->prev = temp;
		temp->next = node;
		node->next = NULL;
		node->n = n;
	}
	else
	{
		node->next = NULL;
		node->prev = NULL;
		node->n = n;
		temp = node;
		*head = node;
	}
	return (node);
}
