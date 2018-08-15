#include "lists.h"

/**
 * preface - function that prints a string before the main is executed.
 *
 * Return: void.
 */
void __attribute__((constructor)) preface()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
