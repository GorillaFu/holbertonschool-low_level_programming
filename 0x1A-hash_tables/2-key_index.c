#include "hash_tables.h"

/**
 * key_index - gets index based on key
 * @key: key
 * @size: size of hash table
 * Return: index of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int i;

	i = hash_djb2((unsigned char *)key);

	return (i % size);
}
