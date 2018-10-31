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
	unsigned int i = 0;
	unsigned int j = 1;
	int lowest, count, temp = 0;

	if (!array || size <2)
		return;

	for (; i < size - 1 ; i++)
	{
		count = 0;
		j = i + 1;
		if (array[i] < array[j])
		{
			lowest = array[i];
			count = i;
		}
		else
		{
			lowest = array[j];
			count = j;
		}

		for (; j < size ; j++)
		{
			if (array[j] < lowest)
			{
				lowest = array[j];
				count = j;
			}
		}

		temp = array[i];
		array[i] = lowest;
		array[count] = temp;
		print_array(array, size);
	}

}
