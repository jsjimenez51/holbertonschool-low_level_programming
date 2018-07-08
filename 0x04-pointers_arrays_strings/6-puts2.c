#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string input
 *
 */
void puts2(char *str)
{
	int st;

	for (st = 0 ; str[st] != '\0' ; st++)
		if (st % 2 == 0)
			_putchar(str[st]);
	_putchar('\n');
}
