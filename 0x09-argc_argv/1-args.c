#include <stdio.h>

/**
 * main - prints the number of arguments passed to program
 * @argc: number of arguments passed to the program
 * @argv: arguments passed to the program
 *
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
