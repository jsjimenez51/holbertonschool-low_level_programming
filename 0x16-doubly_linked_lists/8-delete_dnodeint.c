#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes a node from a list
 * at a certain index.
 * @head: a double pointer to the head of a linked list.
 * @index: the index of the node to delete.
 *
 * Return: 1 on success, -1 on failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *this_n, *next_n;

	if (!*head)
		return (-1);
	this_n = *head;
	next_n = *head;

	if (!index)
	{
		this_n = this_n->next;
		if (this_n)
			this_n->prev = NULL;
		free(*head);
		*head = this_n;
		return (1);
	}
	while (index)
	{
		if (!this_n)
			return (-1);
		this_n = this_n->next;
		index--;
	}
	next_n = this_n->next;
	this_n->prev->next = next_n;

	if (next_n)
		next_n->prev = this_n->prev;
	free(this_n);
	return (1);
}
