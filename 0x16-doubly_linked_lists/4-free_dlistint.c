#include "lists.h"

/**
 * free_dlistint - a function that frees doubly linked lists.
 * @head: a pointer to the head of a doubly linked list.
 *
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
