#include "holberton.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: input string to be checked
 * @accept: string containing the characters to match.
 *
 * Return: size of the substring found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count1, count2, size;

	size = 0;

	for (count1 = 0 ; s[count1] != '\0' ; count1++)
	{
		for (count2 = 0 ; accept[count2] != '\0' ; count2++)
		{
			if (s[count1] == accept[count2])
			{
				size++;

				break;
			}
		}
		if (size > 0 && accept[count2] == '\0')
			return (size);
	}
	return (size);
}
