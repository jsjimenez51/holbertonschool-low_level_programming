#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - duplicates a string.
 * @str: input string to be duplicated.
 *
 * Return: NULL if insufficient memory or str = NULL, pointer to duplicate
 * string if successful.
 */
char *_strdup(char *str)
{
	int len, cop;

	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0 ; str[len] != '\0' ; len++)
		;

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (cop = 0 ; cop < len ; cop++)
	{
		dup[cop] = str[cop];
	}
	return (dup);
}
