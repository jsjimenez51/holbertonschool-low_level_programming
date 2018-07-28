#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints any input type.
 * @format: list of types of arguments passed to the function.
 * Return: 0.
 */
void print_all(const char * const format, ...)
{
	va_list input;
	int i = 0, ck = 0;
	char *str, cse;

	va_start(input, format);

	while (format && format[i])
	{
		switch (format[i])
		{
		case 'c':
			printf("%c", (char) va_arg(input, int));
			ck = 1;
			break;
		case 'i':
			printf("%i", va_arg(input, int));
			ck = 1;
			break;
		case 'f':
			printf("%f", (float) va_arg(input, double));
			ck = 1;
			break;
		case 's':
			str = va_arg(input, char *);
			ck = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			ck = 1;
			break;
		}
		cse = format[i + 1];
		if (cse != '\0' && ck == 1 &&
		    (cse == 'c' || cse == 'i' || cse == 'f' || cse == 's'))
		{
			printf(", ");
			ck = 0;
		}
		i++;
	}
	va_end(input);
	printf("\n");
}
