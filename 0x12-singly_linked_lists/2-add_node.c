#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int length;

	temp = malloc(sizeof(list_t));

	if(temp == NULL)
		return (NULL);

	temp->str = strdup(str);

	while(str[length] != '\0')
	{
		length++;
	}
	temp->len = length;
	temp->next = *head;
	*head = temp;

	return (temp);
}
