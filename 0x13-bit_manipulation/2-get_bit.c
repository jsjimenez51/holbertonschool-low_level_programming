#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: value at a given index.
 * @index: the index, starting from 0.
 *
 * Return: value of the bit at index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}
