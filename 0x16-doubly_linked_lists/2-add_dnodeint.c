#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: pointer to the head node of a list.
 * @n: value found in the new node.
 *
 * Return: pointer to the new node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = NULL;

	if (head)
		node =  malloc(sizeof(dlistint_t));
	if (node)
	{
		node->n = n;
		node->prev = NULL;
		node->next = *head;
		if (*head)
			(*head)->prev = node;
		*head = node;
	}
	return (node);
}
