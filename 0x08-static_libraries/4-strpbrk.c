#include "holberton.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer to string to be scanned.
 * @accept: pointer to string containing the characters to match.
 *
 * Return: pointer to the byte in s, if no byte is found NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int count1, count2;

	for (count1 = 0 ; s[count1] != '\0' ; count1++)
	{
		for (count2 = 0 ; accept[count2] != '\0' ; count2++)
		{
			if (accept[count2] == s[count1])
			{
				return (s + count1);
			}
		}
	}
	return (NULL);
}
