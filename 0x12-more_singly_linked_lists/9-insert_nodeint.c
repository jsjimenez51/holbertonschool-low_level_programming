#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: double pointer to the head node of a list.
 * @idx: index of the list where the new node should be added.
 * @n: data to be inserted into the list.
 *
 * Return: address of the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *spot, *new;
	unsigned int hed = 1;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	spot = *head;
	tmp = (*(head))->next;
	while (tmp != NULL)
	{
		if (hed == idx)
		{
			spot->next = new;
			new->next = tmp;
			return (new);
		}
		spot = tmp;
		tmp = tmp->next;
		hed++;
	}

	if (hed == idx && tmp == NULL)
	{
		spot->next = new;
		return (new);
	}
	free(new);
	return (NULL);
}
