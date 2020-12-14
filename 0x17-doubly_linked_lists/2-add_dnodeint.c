#include "lists.h"

/**
 * add_dnodeint - function that adds new node to the beginning of
 * a doubly linked list
 *@head: node
 *@n: node data
 *Return: the newly created node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->next = *head;
	node->prev = NULL;
	new->n = n;

	(*head)->prev = new;
	*head = new;

	return (new);
}
