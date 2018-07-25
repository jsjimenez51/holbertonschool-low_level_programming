#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - searches for an integer.
 * @array: input array.
 * @size: number of elements in the array array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: int index of the first element of cmp that does not return 0 or
 * if no element matches, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ct = 0;

	if (size <= 0)
		return (-1);
	if (array && size > 0 && cmp)
	{
		while (ct < size)
		{
			if (cmp(array[ct]))
				return (ct);
			ct++;
		}
	}
	return (-1);
}
