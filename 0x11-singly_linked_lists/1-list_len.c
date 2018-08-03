#include "lists.h"

/**
 * list_len - function that counts the number of existing nodes.
 * @h: pointer to nodes.
 *
 * Return: number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t ct = 0;

	while (h)
	{
		h = h->next;
		ct++;
	}
	return (ct);
}
