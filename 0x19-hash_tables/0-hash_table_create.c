#include "hash_tables.h"

/**
 * hash_table_create - a function to create hash tables.
 * @size: the size of the hash table.
 *
 * Return: a pointer to the hash table created on success or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht = NULL;
	unsigned long int idx = 0;

	new_ht = malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
	{
		return NULL;
	}
	new_ht->size = size;
	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	while (idx < size)
	{
		new_ht->array[idx] = NULL;
		idx++;
	}
	return (new_ht);
}
