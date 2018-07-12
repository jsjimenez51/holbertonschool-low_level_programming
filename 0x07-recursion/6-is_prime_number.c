#include "holberton.h"

/**
 * chk_prime - checks values against input to determine if prime.
 * @n: input valut being checked.
 * @div: current divisor being checked.
 *
 * Return: 1 if n is a prime number, else 0.
 */
int chk_prime(int n, int div)
{
	if (n == div)
		return (1);

	if (n % div == 0)
		return (0);

	return (chk_prime(n, div + 1));
}

/**
 * is_prime_number - determines if input value is a prime number.
 * @n: input value to be check if prime.
 *
 * Return: 1 if number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int div = 1;

	if (n < 2)
		return (0);

	return (chk_prime(n, div + 1));
}
