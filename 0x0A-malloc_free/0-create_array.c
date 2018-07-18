#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: specific char that initializes the array.
 *
 * Return: NULL if size = 0 or fail, if successful pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	unsigned int ct;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (ct = 0 ; ct < size ; ct++)
	{
		p[ct] = c;
	}
	return (p);
}
