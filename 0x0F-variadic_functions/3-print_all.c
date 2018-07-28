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
	char *str;

	va_start(input, format);

	while (format[i] != '\0' && format != '\0')
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
			printf("%f", va_arg(input, double));
			ck = 1;
			break;
		case 's':
			str = va_arg(input, char*);
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
		if (format[i + 1] != '\0' && ck == 1)
			printf(", ");
		ck = 0;
		i++;
	}
	printf("\n");
	va_end(input);
}
