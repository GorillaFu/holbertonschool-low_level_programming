#include "hash_tables.h"

/**
 * hash_table_set - function for setting keys+vals at index in a hashtable
 * @ht: hash table
 * @value: value of key
 * @key: key
 * Return: 0 if fail or 1
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned int i;
	hash_node_t *node;

	if (!key || !ht || !value)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	if (ht->array[i] != NULL)
	{
		if (strcmp(key, ht->array[i]->key) == 0)
		{
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}

	if (ht->array[i] == NULL)
	{
		node = malloc(sizeof(hash_node_t *));
		if (node == NULL)
			return (0);
		node->next = NULL;
		node->key = strdup(key);
		node->value = strdup(value);
		ht->array[i] = node;
	}
	else
	{
		node = malloc(sizeof(hash_node_t *));
		if (node == NULL)
			return (0);
		node->key = strdup(key);
		node->value = strdup(value);
		node->next = ht->array[i];
		ht->array[i]  = node;
	}

	return (1);
}
