#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: input string to reverse
 *
 */
void rev_string(char *s)
{
	int st;
	int first, last, temp;

	for (st = 0; s[st] != '\0' ; st++)
		;

	first = 0;
	last = st - 1;

	for (; first <= last ; first++, last--)
	{
		temp = s[last];
		s[last] = s[first];
		s[first] = temp;
	}
}
