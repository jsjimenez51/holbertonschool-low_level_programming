#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - locates a substring within a main string.
 * @haystack: string to be examined.
 * @needle: substring to be searched for in haystack.
 *
 * Return: pointer to the beginning of the located substring or NULL.
 */
char *_strstr(char *haystack, char *needle);
{
	unsigned int ct1, ct2;

	for (ct1 = 0 ; haystack[ct1] != '\0' ; ct1++)
	{
		for (ct2 = 0 ; needle[count2] != '\0' ; ct2++)
		{
			if
