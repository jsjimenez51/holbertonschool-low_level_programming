#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: target string
 * @src: origin string
 * @n: size of string in bytes
 *
 *Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int st, count;

	for (st = 0; dest[st] != '\0' ; st++)
		;
	for (count = 0 ; src[count] != '\0' && count < n; count++)
		dest[st++] = src[count];
	dest[st] = '\0';
	return (dest);
}
