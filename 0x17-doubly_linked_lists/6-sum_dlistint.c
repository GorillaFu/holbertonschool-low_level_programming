#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data of a
 * dbly linked list.
 * @head: head node
 * Return: the sum of the list data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum = sum + (temp->n);
		temp = temp->next;
	}
	return (sum);
}
