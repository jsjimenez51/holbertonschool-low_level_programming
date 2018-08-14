#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: bit whose value will be set to 0.
 * @index: the index, starting from 0.
 *
 * Return: 1 if it worked, or -1 if an error occured.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
