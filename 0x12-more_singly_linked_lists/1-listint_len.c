#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: pointer to the head node of a list.
 *
 * Return: the number of linked elements.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	size_t elems;

	if (!h)
		return (0);

	tmp = h;

	while (tmp)
	{
		elems++;
		tmp = tmp->next;
	}
	return (elems);
}
