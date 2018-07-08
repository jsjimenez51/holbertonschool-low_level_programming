#include "holberton.h"

/**
 * print_rev - prints a string in reverse.
 * @s: string input to reverse.
 *
 */
void print_rev(char *s)
{
	int st;

	for (st = 0 ; s[st] != 0 ; st++)
		;
	for (st = st - 1 ; st != -1; st--)
		_putchar(s[st]);
	_putchar('\n');
}
