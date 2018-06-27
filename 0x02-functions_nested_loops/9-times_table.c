#include "holberton.h"

/**
 * times_table - multiplication table output
 *
 *
 * Return: void
 */
void times_table(void)
{
	int row;
	int col;
	int a;
	int b;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			a = (row * col) / 10;
			b = (row * col) % 10;
			if (row * col > 9)
				_putchar(a + '0');
				_putchar(b + '0');
			if (col == 9)
				break;
			_putchar(',');
			_putchar(' ');
			if ((row * (col + 1)) < 10)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
