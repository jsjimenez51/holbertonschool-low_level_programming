#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a list.
 * @head: a pointer to a doubly linked list.
 * @index: the index of the nth node.
 * Return: the nth node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (index > 0)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index--;
	}
	return (head);
}
