#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: double pointer to the head node of a list.
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if successful, -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *tmp2;
	unsigned int ct = 0;

	if (!*head)
		return (-1);

	tmp = *head;
	tmp2 = *head;

	if (!index)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}

	while (ct < index - 1)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
		ct++;
	}

	tmp2 = tmp->next;
	tmp->next = tmp2->next;
	free(tmp2);
	return (1);
}
