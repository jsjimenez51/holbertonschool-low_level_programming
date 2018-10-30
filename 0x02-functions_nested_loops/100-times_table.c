#include "holberton.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: input for the multiplication table.
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row, col, mult, sing, dub, hund;

	if (n < 0 || n > 15)
		return;

	if (n == 0)
	{
		_putchar('0');
		_putchar('\n');
	}

	row = 0;
	while (row <= n)
	{
		col = 0;
		while (col <= n  && col > 0)
		{
			mult = row * col;
			sing = mult % 10;
			dub = (mult / 10) % 10;
			hund = mult / 100;
			_putchar(',');
			_putchar(' ');

			if (mult <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(sing + '0');
			}
			else if (mult > 9 && mult < 100)
			{
				_putchar(' ');
				_putchar(dub + '0');
				_putchar(sing + '0');
			}
			else if (mult > 99 && mult < 999)
			{
				_putchar(hund + '0');
				_putchar(dub + '0');
				_putchar(sing + '0');
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}
