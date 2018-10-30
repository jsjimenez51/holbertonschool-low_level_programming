#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: input string 1.
 * @s2: input string 2.
 *
 * Return: NULL on failure, pointer to newly allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	int str1, str2, i, j;

	char *p;

	str1 = 0;
	str2 = 0;

	if (s1 == NULL)
	{
		s1 = malloc(sizeof(char));
		if (s1 == NULL)
		{
			return (NULL);
		}
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(sizeof(char));
		if (s2 == NULL)
		{
			return (NULL);
		}
		*s2 = '\0';
	}
	while (s1[str1] != '\0')
		str1++;
	while (s2[str2] != '\0')
		str2++;
	p = malloc(sizeof(char) * (str1 + str2 + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; s1[i] != '\0' ; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0 ; s2[j] != '\0' ; j++)
	{
		p[i+j] = s2[j];
	}
	return (p);
}
