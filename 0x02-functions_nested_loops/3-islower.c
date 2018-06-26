#include "holberton.h"

/**
 * _islower - check for lowercase character
 * @c: it is the letter being checked
 * Return: (1) c is lowercase (0) otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
