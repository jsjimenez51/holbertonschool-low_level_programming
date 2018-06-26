#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @i: iteger input
 *
 * Return: (num)
 */
int _abs(int i)
{
	int num;

	if (i >= 0)
		num = i;
	else
		num = i * -1;
	return (num);
}
