#include "holberton.h"

/**
 * _strspn - gets the length of a prefix string.
 * @s: input string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: the number of characters in s that match chars from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count1, count2, size;

	size = 0;

	for (count1 = 0 ; s[count1] != '\0' ; count1++)
	{
		if (size != count1)
			break;
		for (count2 = 0 ; accept[count2] != '\0' ; count2++)
		{
			if (s[count1] == accept[count2])
				size++;
		}
	}
	return (size);
}
