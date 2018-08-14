#include "holberton.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: first input number.
 * @m: second input number.
 *
 * Return: bits to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int ct = 0;
	unsigned long int fbs = n ^ m;

	while (fbs)
	{
		fbs = fbs & (fbs - 1);
		ct++;
	}
	return (ct);
}
