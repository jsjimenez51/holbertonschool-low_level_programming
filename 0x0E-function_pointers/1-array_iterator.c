#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter on each element
 * of an array.
 * @array: pointer to the input array.
 * @size: size of the input array.
 * @action: pointer to the function to be used.
 *
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t ct;

	if (array && size && action)
		for (ct = 0 ; ct < size ; ct++)
			action(array[ct]);
}
