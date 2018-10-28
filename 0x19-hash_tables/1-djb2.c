#include "hash_tables.h"

/**
 * hash_djb2 - string hashing function that implements the djb2 algorithm.
 * @str: key name passed to be translated to a hash value.
 *
 * Return: returns a hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
