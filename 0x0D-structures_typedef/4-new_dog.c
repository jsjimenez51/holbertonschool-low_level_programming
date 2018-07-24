#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a pointer into a new allocated memory space
 * @str: input string to be duplicated.
 *
 * Return: NULL if fail or does not exist, else pointer to new memory
 */
char *_strdup(char *str)
{
	char *newb;
	int i, j;

	if (!str)
	{
		return (NULL);
	}
	for (i = 0 ; str[i] != '\0' ; i++)
		;
	j = 0;
	newb = malloc(sizeof(char) * j + 1);
	if (newb == NULL)
	{
		return (NULL);
	}
	for (j = 0 ; j <= i; j++)
	{
		newb[i] = str[i];
	}
	return (newb);
}

/**
 * new_dog - function that creates a new dog
 * @name: new dog's input name
 * @age: new dog's input age
 * @owner: new dog's input owner
 *
 * Return: pointer to new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *dmx;

	dmx = malloc(sizeof(dog_t));
	if (dmx == NULL)
	{
		return (NULL);
	}
	dmx->name = _strdup(name);
	if (dmx->name == NULL)
	{
		free(dmx);
		return (NULL);
	}
	dmx->age = age;
	dmx->owner = _strdup(owner);
	if (dmx->owner == NULL)
	{
		free(dmx->name);
	        free(dmx);
		return (NULL);
        }
	return (dmx);
}
