#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves the value associated with a key.
 * @ht: the hash table.
 * @key: the key from which a value will be retrieved.
 *
 * Return: value associated with a key, or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *key_val;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] == NULL)
		return (NULL);

	key_val = ht->array[idx];
	while (key_val)
	{
		if (strcmp(key_val->key, key) == 0)
			return (key_val->value);

		key_val = key_val->next;
	}
	return (NULL);
}
