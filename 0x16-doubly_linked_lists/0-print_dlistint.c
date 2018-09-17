#include "lists.h"

/**
 * print_dlistint - function to print a list.
 * @h: pointer to the head of a list.
 * Return: count.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ct;

	for (ct = 0; h != NULL; ct++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (ct);
}
