#include "lists.h"

/**
 * dlistint_len - finds the length of a linked list.
 * @h: pointer to the head of the list.
 * Return: length of the linked list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ct;

	for (ct = 0; h != NULL; ct++)
		h = h->next;

	return (ct);
}
