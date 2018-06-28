#include "holberton.h"

/**
 * more_numbers - prints numbers 0 thru 14 ten times
 * @num - numbers for output
 *
 * Return: void
 */
void more_numbers(void)
{
	int row;
	int num;
	int tens1;
	int tens2;

	for (row = 0 ; row < 10 ; row++)
	{
		for (num = 0 ; num < 15 ; num++)
		{
			tens1 = num / 10;
			tens2 = num % 10;
			if (tens1 > 0)
				_putchar(tens1 + '0');
			_putchar(tens2 + '0');
		}
		_putchar('\n');
	}
}
