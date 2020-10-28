#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *traverse;
	int length = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	temp->str = strdup(str);
	while(str[length] != '\0')
	{
		length++;
	}
	temp->len = length;
	temp->next = NULL;

	if(*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	traverse = *head;
	while(traverse->next)
	{
		traverse = traverse->next;
	}

	traverse->next = temp;
	return (temp);
}
