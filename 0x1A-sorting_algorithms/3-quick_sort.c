#include "sort.h"

/**
 * swap - swaps the values of two element
 * @first: first element value to swap.
 * @second: second element value to swap.
 * @array: the array to be sorted.
 * @size: the size of the array.
 *
 * Return: void.
 */
void swap(int *first, int *second, int *array, size_t size)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
	print_array(array, size);
}

/**
 * partition - sorts the values based on the pivot element.
 * @array: the array to be sorted.
 * @higher: higher sub array that will hold values greater than the pivot value
 * @lower: lower sub array that will hold values lower than the pivot value.
 * @size: the size of the array.
 *
 * Return: the partition index.
 */
int partition(int *array, int lower, int higher, size_t size)
{
	int idx;
	int p_idx = lower;
	int pivot = array[higher];

	for (idx = lower ; idx < higher ; idx++)
	{
		if (array[idx] <= pivot)
		{
			if (p_idx != idx)
				swap(&array[p_idx], &array[idx], array, size);
			p_idx += 1;
		}
	}
	if (higher != p_idx)
		swap(&array[higher], &array[p_idx], array, size);
	return (p_idx);
}

/**
 * quicksort_rec - function that recursively executes the quicksort algorithm
 * @array: the array to be sorted.
 * @higher: higher sub array that will hold values greater than the pivot value
 * @lower: lower sub array that will hold values lower than the pivot value.
 * @size: the size of the array.
 *
 * Return: void.
 */
void quicksort_rec(int *array, int lower, int higher, size_t size)
{
	int p_elem;

	if (lower < higher)
	{
		p_elem = partition(array, lower, higher, size);
		quicksort_rec(array, lower, p_elem - 1, size);
		quicksort_rec(array, p_elem + 1, higher, size);
	}

}

/**
 * quick_sort - sorts an array of integers using the quick sort algorithm
 * @array: the array to be sorted.
 * @size: the size of the array.
 *
 * Return: void.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quicksort_rec(array, 0, size - 1, size);
}
