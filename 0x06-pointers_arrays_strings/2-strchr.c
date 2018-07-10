#include "holberton.h"

/**
 * *_strchr - locates a character in a string.
 * @s: input string containing the target character.
 * @c: character to be located.
 *
 * Return: pointer to C in string s or NULL if character not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int count;

	for (count = 0 ; s[count] != '\0' ; count++)
		if (s[count] == c)
			return (s + count);

	if (c == '\0')
		return (s + count);

	return ("NULL");
}
