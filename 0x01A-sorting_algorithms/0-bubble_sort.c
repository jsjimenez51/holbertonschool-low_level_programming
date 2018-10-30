#include "sort.h"

/**
 * bubble_sort - sorting function that utilizes the bubble sorting algorithm.
 * @array: an array of int values to be sorted.
 * @size: size of the array
 *
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	int swap;
	size_t mover;
	size_t sorter;

	if (array == NULL || size < 2)
		return;

	for (mover = 0; mover < size -1; mover++)
	{
		for (sorter = 0; sorter < size - 1; sorter++)
		{
			if (array[sorter] > array[sorter + 1])
			{
				swap = array[sorter + 1];
				array[sorter + 1] = array[sorter];
				array[sorter] = swap;
				print_array(array, size);
			}
		}
	}
}
