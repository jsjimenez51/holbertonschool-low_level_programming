#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - groups input data for dog name, age, and owner
 * @name: input dog's name
 * @age: input dog's age
 * @owner: input dog's owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

char *_strdup(char *str);

#endif /* _DOG_H_ */
