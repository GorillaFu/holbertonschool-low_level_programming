#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - delete memory in linked list
 * @head: pointer to head node
 */
void free_list(list_t *head)
{
	/*if head exists*/
	if (head)
	{
		/*recursively travel down list*/
		free_list(head->next);
		/*clear str*/
		if (head->str)
			free(head->str);
		/*clear head*/
		free(head);
	}
}
