#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a string input followed by a new line.
 * @separator: string to be printed between strings.
 * @n: number of input strings passed to the function.
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int ct;
	char *st;
	va_list strgs;

	va_start(strgs, n);

	for (ct = 0 ; ct < n ; ct++)
	{
		st = va_arg(strgs, char *);
		if (!separator)
			separator = "";
		if (!st)
			printf("(nil)");
		if (ct == n - 1)
			printf("%s", st);
		else
			printf("%s%s", st, separator);
	}
	printf("\n");
	va_end(strgs);
}
