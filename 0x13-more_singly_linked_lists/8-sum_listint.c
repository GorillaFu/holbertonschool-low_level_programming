#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sum the values of the list.
 *
 * @head:first node of the list
 *
 * Return: su of data.
 */
int sum_listint(listint_t *head)
{
	unsigned int i = 0;
	listint_t *temp = head;

	if (head == NULL)
		return (0);

	while (head)
	{
		i += head->n;
		temp = head->next;
		head = temp;
	}
	return (i);
}
