#include "holberton.h"

/**
 * *_strcpy - copies the string pointed to by src
 * @src: input source string
 * @dest: destination string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int ct;

	for (ct = 0; src[ct] != '\0'; ct++)
	{
		dest[ct] = src[ct];
	}
	dest[ct] = '\0';

	return (dest);
}
