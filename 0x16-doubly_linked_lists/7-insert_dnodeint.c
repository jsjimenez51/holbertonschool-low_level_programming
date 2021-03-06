#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a node at index.
 * @h: a double pointer to the beginning of a list.
 * @idx: index where the new node will be added.
 * @n: data to be added to the new node.
 *
 * Return: address of the new node or NULL.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int ct;
	dlistint_t *node, *last;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	last = *h;

	for (ct = 0 ; last != NULL && ct < idx ; ct++)
		last = last->next;

	if (last == NULL && ct == idx)
		return (add_dnodeint_end(h, n));

	else if (last != NULL)
	{
		node = malloc(sizeof(dlistint_t));

		if (node == NULL)
			return (NULL);
		node->n = n;
		last->prev->next = node;
		node->prev = last->prev;
		last->prev = node;
		node->next = last;

		return (node);
	}
	return (NULL);
}
