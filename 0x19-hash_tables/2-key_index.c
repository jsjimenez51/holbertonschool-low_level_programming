#include "hash_tables.h"

/**
 * key_index - a function that returns the index of a key.
 * @key: the key being passed.
 * @size: the array size of the hash table.
 *
 * Return: the index for the key and value stored in the array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_idx = hash_djb2(key);

	return (hash_idx % size);
}
