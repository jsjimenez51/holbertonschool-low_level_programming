#include "holberton.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: input string
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int cap;

	for (cap = 0 ; s[cap] != '\0' ; cap++)
	{
		if (s[cap] >= 'a' && s[cap] <= 'z')
			s[cap] -= 32;
	}
	return (s);
}
