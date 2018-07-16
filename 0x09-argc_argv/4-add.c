#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of arguments passed to the program.
 * @argv: arguments passed to the program.
 *
 * Return: 0 if successful, 1 and print Error if symbols or no digit passed.
 */
int main(int argc, char *argv[])
{
	int c1, c2;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (c1 = 1; c1 < argc; c1++)
	{

		for (c2 = 0; argv[c1][c2] != '\0'; c2++)
			if (!isdigit(argv[c1][c2]))
			{
				printf("Error\n");
				return (1);
			}
		add = add + atoi(argv[c1]);
	}
	printf("%i\n", add);
	return (0);
}
