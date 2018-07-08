#include <stdio.h>

/**
 * print_array - prints elements of an array of ints.
 * @a: The array from input.
 * @n: number of elements within the array.
 *
 */
void print_array(int *a, int n)
{
	int num;

	for (num = 0 ; num < n ; num++)
	{
		printf("%d", a[num]);
		if (num < n - 1)
			printf(", ");
	}
	printf("\n");
}
