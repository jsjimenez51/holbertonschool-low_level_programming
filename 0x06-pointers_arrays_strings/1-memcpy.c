#include "holberton.h"

/**
 * _memcpy - copies memory area from one address to another.
 * @dest: address of memory to be filled.
 * @src: address of memory to be copied.
 * @n: number of bytes to be copied.
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;

	while (count < n)
	{
	dest[count] = src[count];
	count++;
	}

	return (dest);
}
