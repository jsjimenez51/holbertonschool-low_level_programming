#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table to be deleted.
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *node;
	unsigned long int idx = 0;

	while (idx < ht->size)
	{
		node = ht->array[idx];
		while (node)
		{
			temp = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = temp;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
