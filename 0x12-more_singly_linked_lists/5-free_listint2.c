#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to the head node of a list.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *dom = NULL;

	while (*head && head)
	{
		dom = *head;
		*head = (*head)->next;
		free(dom);
	}
}
