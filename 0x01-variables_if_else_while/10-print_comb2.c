#include <stdio.h>

/**
 * main - prints numbers 00 to 99
 *
 *
 * Return: (0) Success
 */

int main(void)
{
	int a;
	int b;

	for (b = 48; b <= 57; b++)
	{
		for (a = 48; a <= 57; a++)
		{
			putchar(b);
			putchar(a);
			if (a != 57 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
