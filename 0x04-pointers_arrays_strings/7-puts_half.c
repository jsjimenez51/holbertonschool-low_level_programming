#include "holberton.h"

/**
 * puts_half - prints half of a string
 * @str: string input to be halved
 *
 */
void puts_half(char *str)
{
	int st, pos, neg;

	for (st = 0 ; str[st] != '\0' ; st++)
		;
	if (st % 2 == 0)
		for (pos = st / 2; str[pos] != 0; pos++)
			_putchar(str[pos]);
	else
		for (neg = (st + 1) / 2 ; str[neg] != '\0'; neg++)
			_putchar(str[neg]);
	_putchar('\n');
}
