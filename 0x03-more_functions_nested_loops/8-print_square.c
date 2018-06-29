#include "holberton.h"

/**
 * print_square - prints a square
 * @size: inputted value that denotes size of square
 *
 * Return: void
 */

void print_square(int size)
{
	int row;
	int hash;

	for (row = 0 ; row < size ; row++)
	{
		for (hash = 0 ; hash < size ; hash++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
