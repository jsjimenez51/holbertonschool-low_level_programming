#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - returns the length of a string.
 * @s: input string.
 *
 * Return: length of the string.
 */
int _strlen(char *s)
{
	int str;

	for (str = 0 ; s[str] != '\0' ; str++)
		;
	return (str);
}

/**
 * string_nconcat - concatenates two strings into a new block of memory
 * @s1: first string to concatenate.
 * @s2: second string to concatenate limited by n.
 * @n: bytes of s2 to be concatenated to new memory block.
 *
 * Return: if fail return NULL, pointer to new allocated memory if success.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, len1, len2;

	/* set conditions for edge cases of NULL strings */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* find length of s1 & s2 */
	len1 = _strlen(s1);
	len2 = n;
	/* allocate memory for new string leaving room for null byte */
	ptr = malloc(len1 + len2 + 1);
	/* if malloc fails return NULL */
	if (ptr == NULL)
		return (NULL);
	/* copy s1 & s2 into new string */
	for (i = 0 ; s1[i] != '\0' ; i++)
		ptr[i] = s1[i];
	for (j = 0 ; s2[j] != '\0' && j < n ; i++, j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}
