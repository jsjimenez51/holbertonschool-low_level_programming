#include "holberton.h"

/**
 * jack_bauer - prints minutes of the day
 *
 *
 *
 * Return:
 */
void jack_bauer(void)
{
	int hrs;
	int min;
	int a, b, c, d;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((a = hrs / 10) + '0');
			_putchar((b = hrs % 10) + '0');
			_putchar(':');
			_putchar((c = min / 10)  + '0');
			_putchar((d = min % 10) + '0');
			_putchar('\n');
		}
	}
}
