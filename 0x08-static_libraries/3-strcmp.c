#include "holberton.h"

/**
 * _strcmp - compares two strings
 * @s1: 1st string input
 * @s2: 2nd string input
 *
 * Return: the difference between strings
 */

int _strcmp(char *s1, char *s2)
{
	int cmp;

	for (cmp = 0 ; s1[cmp] == s2[cmp]; cmp++)
	{
		if (s1[cmp] == '\0')
			return (0);
	}
	return (s1[cmp] - s2[cmp]);
}
