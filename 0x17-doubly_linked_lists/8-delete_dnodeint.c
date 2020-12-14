#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: node
 * @index: index
 * Return: 1 if success, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 1;
	dlistint_t *temp, *last;

	if (head == NULL)
		return (-1);

	temp = *head;
	last = *head;

	if (temp == NULL || last == NULL)
		return(-1);
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			(*head)->prev = NULL;
		}
		free(temp);
		return (1);
	}
	while (temp != NULL)
	{
		last = temp;
		temp = temp->next;
		if (i == index)
		{
			if (temp)
				last->next = temp->next;
			if (temp->next != NULL)
			{
				temp->next->prev = last;
			}
      			free(temp);
			return (1);
		}
		i++;
	}
        return (-1);
}
