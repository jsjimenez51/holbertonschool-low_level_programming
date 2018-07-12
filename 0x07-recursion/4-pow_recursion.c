#include "holberton.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: input int from main to be raised.
 * @y: input int that x will be raised to the power of.
 *
 * Return: value of x raised to y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
