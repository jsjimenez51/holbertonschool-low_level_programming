#include "lists.h"

/**
 * add_dnodeint_end - add a new node to the end of a list.
 * @head: double pointer to the head of a list.
 * @n: data contained within the new node.
 *
 * Return: pointer to the new node.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *last;

	if (head == NULL)
		return (NULL);

	node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		node->prev = NULL;
		*head = node;
		return (node);
	}
	last = *head;

	for (; last->next != NULL;)
	{
		last = last->next;
	}
	last->next = node;
	node->prev = last;
	return (node);
}
