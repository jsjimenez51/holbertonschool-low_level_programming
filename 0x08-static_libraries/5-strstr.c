#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @haystack: the string in which the function looks for the substring
 * @needle: the substring
 *
 * Return: a pointer to the beginning of the substring, or NULL is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int count;
	char *h;

	for (; *haystack != '\0'; haystack++)
	{
		count = 0;
		h = haystack;

		while (*h == needle[count])
		{
			count++;
			h++;
			if (needle[count] == '\0')
				return (haystack);
		}
	}
	return (NULL);
}
