#include "holberton.h"

/**
 * print_most_numbers - prints the number 0 to 9 except 2 & 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		if (num != 2 && num != 4)
			_putchar(num + '0');
	}
	_putchar('\n');
}
