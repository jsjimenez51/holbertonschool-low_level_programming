#include "search_algos.h"

/**
 * linear_search - searches for a value in an array utilizing the linear search
 * @array: pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the target value being searched for
 *
 * Return: first index value is found, -1 if array is NULL or value not found
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int idx;

	if (array == NULL || size == 0)
		return (-1);

	idx = 0;
	while (idx < size)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}
	return (-1);
}
