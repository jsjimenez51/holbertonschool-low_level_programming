#include "hash_tables.h"

/**
 * free_hash_node - frees a node from a list.
 * @node: the node to be free'd.
 *
 * Return: void.
 */
void free_hash_node(hash_node_t *node)
{
	if (node == NULL)
		return;
	free(node->key);
	free(node->value);
	free(node);
}

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table to be deleted.
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	hash_node_t *h_node;
	unsigned long int idx = 0;

	while (idx < ht->size)
	{
		h_node = ht->array[idx];
		while (h_node)
		{
			temp = h_node->next;
			free_hash_node(h_node);
			h_node = temp;
		}
		idx++;
	}
	free(ht->array);
	free(ht);
}
