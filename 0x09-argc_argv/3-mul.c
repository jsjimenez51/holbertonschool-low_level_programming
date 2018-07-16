#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of arguments passed to the program.
 * @argv: arguments passed to the program.
 *
 * Return: 0 if successful, 1 and print Error if 2 arguments arent received
 */
int main(int argc, char *argv[])
{
	int i, mul;

	mul = 1;

	if (argc > 2 && argc < 4)
	{
		for (i = 1 ; i < argc ; i++)
		{
			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
