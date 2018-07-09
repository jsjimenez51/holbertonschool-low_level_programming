#include "holberton.h"

/**
 * reverse_array - reverses the content of an array
 * @a: input array to be reversed
 * @n: size of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int num;
	int length;
	int temp;

	length = n - 1;

	for (num = 0; num < n / 2; length--, num++)
	{
		temp = a[num];
		a[num] = a[length];
		a[length] = temp;
	}
}
