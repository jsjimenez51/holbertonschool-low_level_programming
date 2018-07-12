#include "holberton.h"

/**
 * _sqrt_chk - checks for the square root of the input value.
 * @n: input value to have square root checked.
 * @rt: the square root value being checked.
 *
 * Return: rt if rt * rt is n, else -1.
 */
int _sqrt_chk(int n, int rt)
{
	if (n == rt * rt)
		return (rt);
	if (n < rt * rt)
		return (-1);
	return (_sqrt_chk(n, rt + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input value to have square root returned
 * @rt: root value counter
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	return (_sqrt_chk(n, rt + 1));
}
