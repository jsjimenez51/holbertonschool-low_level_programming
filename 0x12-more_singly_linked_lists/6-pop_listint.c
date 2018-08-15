#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to the pointer of the head node.
 *
 * Return: 0 if linked list is empty, or the head node's data.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (!*head || !head)
		return (0);

	data = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (data);
}
