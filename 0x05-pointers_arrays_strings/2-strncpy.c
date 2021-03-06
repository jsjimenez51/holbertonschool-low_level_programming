#include "holberton.h"

/**
 * _strncpy - copy a string
 * @src: input string
 * @dest: target destination string
 * @n: number of chars being copied
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int st;

	for (st = 0; src[st] != '\0' && st < n; st++)
		dest[st] = src[st];
	for (; st < n; st++)
		dest[st] = '\0';
	return (dest);
}
