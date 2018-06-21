#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - assigns random value to n then prints
 * last number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigit = n % 10;

	printf("Last digit of %d is ", n);
	if (lastDigit > 5)
		printf("%d and is greater than 5\n", lastDigit);
	else if (n == 0)
		printf("%d and is 0\n", n);
	else
		printf("%d and is less than 6 and not 0\n", lastDigit);
	return (0);
}
