#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: number of bytes needed to be allocated.
 *
 * Return: pointer to allocated memory if fail exit with 98.
 */
void *malloc_checked(unsigned int b)
{
	/* create pointer for allocated memory */
	unsigned int *ptr;

	/* allocate memory assigned to *ptr */
	ptr = malloc(b);

	/* if malloc fails exit with status = 98 */
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
