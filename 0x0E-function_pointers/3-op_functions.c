#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two integers
 * @a: 1st input int.
 * @b: 2nd input int.
 *
 * Return: sum of a & b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: 1st input int.
 * @b: 2nd input int.
 *
 * Return: difference of a & b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers.
 * @a: 1st input int.
 * @b: 2nd input int.
 *
 * Return: Product of a & b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - return the result of a / by b.
 * @a: 1st input int.
 * @b: 2nd input int.
 *
 * Return: result of a / b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the remainder of a division of a / b.
 * @a: 1st input int.
 * @b: 2nd input int.
 *
 * Return: remainder.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
