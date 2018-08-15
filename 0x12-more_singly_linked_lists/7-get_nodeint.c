#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node.
 * @index: index of the node, starting at 0.
 *
 * Return: NULL if the node does not exist, else returns the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *get;
	unsigned int ct = 0;

	if (head != NULL)
	{
		get = head;
		while (get != NULL)
		{
			if (ct == index)
				return (get);
			get = get->next;
			ct++;
		}
	}
	return (NULL);
}
