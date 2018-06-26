#include "holberton.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: input to get last number
 *
 * Return: (num)
 */
int print_last_digit(int i)
{
	if (i > 0)
	{
		_putchar((i % 10) + '0');
		return (i % 10);
	}
	else
	{
		_putchar(((i * -1) % 10) + '0');
		return ((i * -1) % 10);
	}
}
