#include "holberton.h"

/**
 * _atoi - convert string to integer
 * @s: input string
 *
 * Return: converted integer or 0
 */
int _atoi(char *s)
{
	int a, t, i, n;

	a = 0;
	n = 1;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		t = s[i];
		if (t == '-')
			n *= -1;
		if (t >= '0' && t <= '9')
		{
			if (n < 0)
				a = (a * 10) - (t - '0');
			else
				a = (a * 10) + (t - '0');
			if ((s[i + 1]) < '0' || (s[i + 1]) > '9')
			{
				break;
			}
		}
	}
	if (a != 0)
		return (a);
	else
		return (0);
}
