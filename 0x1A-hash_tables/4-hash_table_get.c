#include "hash_tables.h"

/**
 * hash_table_get - retrieve value of a key
 * @ht: hash table
 * @key: key
 * Return: the value of key or null on fail
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{

	unsigned int index = 0;
	hash_node_t *tmp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			tmp = ht->array[index];
			while (tmp != NULL)
			{
				if (strcmp(key, tmp->key) == 0)
					return (tmp->value);
				tmp = tmp->next;
			}
		}
		index++;
	}
	return (NULL);
}
