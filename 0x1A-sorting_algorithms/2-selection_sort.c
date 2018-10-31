#include "sort.h"

/**
 * selection_sort - function that executes a selection sort
 * @array: pointer to the array to be sorted.
 * @size: the size of the array.
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j;
	unsigned int lowest;
	int temp;

	for (i = 0 ; i < size - 1 ; i++)
	{
		lowest = i;
		for (j = i + 1 ; j < size ; j++)
		{
			if (array[j] < array[lowest])
			{
				lowest = j;
			}
		}
		if (lowest != i)
		{
			temp = array[lowest];
			array[lowest] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}
