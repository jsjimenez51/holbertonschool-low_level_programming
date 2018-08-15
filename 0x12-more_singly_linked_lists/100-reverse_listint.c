#include "lists.h"

/**
 * reverse_listint - reverse a listint_t linked list.
 * @head: double pointer to the head node of a list.
 *
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *this, *last;

	this = NULL;
	last = NULL;

	while (*head)
	{
		this = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = this;
	}
	*head = last;
	return (*head);
}
