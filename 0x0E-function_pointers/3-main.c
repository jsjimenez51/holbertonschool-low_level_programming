#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that performs simple operations.
 * @argc: number of arguments.
 * @argv: arguments being passed.
 *
 * Return: 98 if num argument is not correct, 99 if operator is incorrect,
 * 100 if argument is divide or mod by 0 and 0 if successful.
 */
int main(int argc, char **argv)
{
	int var1, var2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	var1 = atoi(argv[1]);
	var2 = atoi(argv[3]);

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(var1, var2));
	return (0);
}
