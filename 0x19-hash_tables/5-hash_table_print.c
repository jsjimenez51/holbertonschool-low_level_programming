#include "hash_tables.h"

/**
 * hash_table_print - a function to print hash tables
 * @ht: the hash table to be printed.
 *
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	int flag = 0;
	hash_node_t *p_node;

	if (ht == NULL)
		return;
	printf("{");
	while (idx < ht->size)
	{
		p_node = ht->array[idx];
		while (p_node)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", p_node->key, p_node->value);
			flag = 1;
			p_node = p_node->next;
		}
		idx++;
	}
	printf("}\n");
}
