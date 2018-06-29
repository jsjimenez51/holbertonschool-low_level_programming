#include "holberton.h"

/**
 * print_diagonal - draws diagonal line to term based on input
 * @n: the number of times \ should be printed
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int spc;
	int dag;

	for (spc = 0 ; spc < n ; spc++)
	{
		for (dag = 0 ; dag < spc ; dag++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
