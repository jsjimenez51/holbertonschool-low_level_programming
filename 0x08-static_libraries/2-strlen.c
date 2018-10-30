#include "holberton.h"

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int st;

	for (st = 0; s[st] != '\0' ; st++)
		;
	return (st);
}
