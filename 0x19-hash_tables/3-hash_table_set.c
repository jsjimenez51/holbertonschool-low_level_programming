#include "hash_tables.h"

/**
 * hash_table_set - adds a new element to an existing hash table.
 * @ht: the hash table a key/value will be added/updated to.
 * @key: a key to be added/updated to the hash table.
 * @value: a value to be added/updated to the hash table.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *head;
	hash_node_t *temp;
	hash_node_t *new;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[idx];
	head = ht->array[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));

	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);

	if (head == NULL)
		new->next = NULL;
	else
		new->next = head;
	ht->array[idx] = new;
	return (1);
}
