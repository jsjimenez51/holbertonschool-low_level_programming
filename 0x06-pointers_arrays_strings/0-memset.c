#include "holberton.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: address of memory to be filled.
 * @b: value to be filled.
 * @n: number of bytes to be filled starting from
 * ptr to be filled
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;

	while (count < n)
		s[count++] = b;

	return (s);
}
