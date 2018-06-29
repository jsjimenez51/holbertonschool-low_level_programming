#include "holberton.h"

/**
 * print_triangle - prints a triangle
 * @size: input dictating size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row;
	int col;

	for (row = 0 ; row < size ; row++)
	{
		for (col = 0 ; col < size ; col++)
		{
			if ((row + col) >= (size -1))
				_putchar('#');
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
