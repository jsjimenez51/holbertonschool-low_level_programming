#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all input parameters.
 * @n: input arguments.
 *
 * Return: 0 if n == 0 or the sum of all input parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int ct, sum = 0;
	va_list input;

	if (n == 0)
		return (0);

	va_start(input, n);
	for (ct = 0 ; ct < n ; ct++)
	{
		sum += va_arg(input, unsigned int);
	}
	va_end(input);
	return (sum);
}
