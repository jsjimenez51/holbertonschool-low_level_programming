#include "holberton.h"

/**
 * _puts - prints string followed by new line
 * @str: string to be returned.
 *
 * Return: string.
 */
void _puts(char *str)
{
	int st;

	for (st = 0; str[st] != '\0' ; st++)
		_putchar(str[st]);
	_putchar('\n');
}
