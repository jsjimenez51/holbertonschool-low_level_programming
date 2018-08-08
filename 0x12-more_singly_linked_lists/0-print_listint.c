#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the head node of a list.
 *
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	size_t nodes = 0;

	if (!h)
		return (0);

	tmp = h;

	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
