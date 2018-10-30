#include "sort.h"

/**
 * selection_sort - function that executes a selection sort
 * @array: pointer to the array to be sorted.
 * @size: the size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int i = 0;
	int j = 0;
	int target, ptr, lowest, temp;

	for (; i < size -1 ; i++)
	{
		target = array[i];
		ptr = array[i +1];

		if (target < ptr)
			lowest = target;
		else
			lowest = ptr;
		for (; j < size ; j++)
		{
			if (ptr < lowest)
				lowest = ptr;
		}
		if target < array[i + 1]
			break;
		else
			temp = target;
			target = lowest;
			ptr = temp;
	}

}
