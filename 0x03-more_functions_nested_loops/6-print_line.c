#include "holberton.h"

/**
 * print_line - draws a straight line length based on input
 * @n: inputed integer that limits the length
 *
 * Return: void
 */
void print_line(int n)
{
	int line;

	for (line = 0 ; line < n ; line++)
		_putchar('_');
	_putchar('\n');
}
