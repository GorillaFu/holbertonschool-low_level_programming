#include "hash_tables.h"

/**
 * free_list - free a list
 * @head: head node of list
 * Returns: nothing
 */

void free_list(hash_node_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->key);
		free(head->value);
		free(head);
	}
}

/**
 * hash_table_delete - delete the hash table
 * @ht: Struct Hash Table
 * Return: None
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *tmp;

	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			tmp = ht->array[index];
			free_list(tmp);
			ht->array[index] = NULL;
		}
		index++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
