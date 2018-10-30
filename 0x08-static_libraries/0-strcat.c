#include "holberton.h"

/**
 * *_strcat - concatenates two strings
 * @src: source of strings
 * @dest: destination string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int st, count;

	for (st = 0; dest[st] != '\0' ; st++)
		;
	for (count = 0; src[count] != '\0' ; count++)
		dest[st++] = src[count];
	dest[st] = '\0';
	return (dest);
}
