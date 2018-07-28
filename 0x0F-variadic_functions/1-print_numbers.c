#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print input numbers followed by a new line.
 * @separator: input string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list input;
	unsigned int ct;

	va_start(input, n);
	for (ct = 0 ; ct < n ; ct++)
	{
		printf("%d", va_arg(input, unsigned int));
		if ((ct < n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(input);
}
