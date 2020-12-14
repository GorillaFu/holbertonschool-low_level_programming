#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returs node at specified
 * position index
 * @head: head node
 * @index: index of desired node
 * Return: node at index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, j = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
