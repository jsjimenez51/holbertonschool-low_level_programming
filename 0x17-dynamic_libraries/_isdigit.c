#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: inputted character
 *
 * Return: 1 if digit 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
