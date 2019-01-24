#include "search_algos.h"

/**
 * array_segment_print - prints the current array segment
 * @array: pointer to the first element of the array
 * @start: the first element of the array
 * @end: the end of the segment
 *
 * Return: void
 */
void array_segment_print(int *array, unsigned int start, unsigned int end)
{
	printf("Searching in array: ");

	while (start <= end)
	{
		printf("%d", array[start]);
		start++;

		if (start <= end)
			printf(", ");
	}
	printf("\n");
}
/**
 * binary_search - uses the binary search algorithm to search a sorted array
 * @array: pointer to the first element of the array
 * @size: the size of the array
 * @value: the target value to search for
 *
 * Return: the idx of the value, else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, mid, high;

	if (array == NULL || size == 0)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		array_segment_print(array, low, high);
		mid = (high - low) / 2 + low;

		if (value == array[mid])
			return (mid);

		if (value < array[mid])
			high = mid - 1;

		else
			low = mid + 1;
	}
	return (-1);
}
