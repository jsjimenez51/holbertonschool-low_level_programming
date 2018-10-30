#include "sort.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a list
 * @h: the head of the list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		h = h->next;
	}
	return (nodes);
}

/**
* insertion_sort_list - sorts a doubly linked list using an insertion sort
* @list: the given list of unsorted values
* Return: a list of sorted values.
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *target = *list;
	listint_t *temp_n, *temp_p, *ptr;

	if (!*list)
		return;

	if (listint_len(*list) == 1)
		return;

	ptr = (*list)->next;
	while (target != NULL)
	{
		while (target->prev && target->n < target->prev->n)
		{
			temp_p = target->prev;
			temp_n = target->next;
			if (temp_p)
				target->prev = temp_p->prev;
			target->next = temp_p;
			temp_p->prev = target;
			temp_p->next = temp_n;
			if (temp_n)
				temp_n->prev = temp_p;
			if (target->prev)
				target->prev->next = target;
			else
				*list = target;
			print_list(*list);
		}
		if (ptr->next == NULL)
		{
			target = ptr;
			while (target->prev && target->n < target->prev->n)
			{
				temp_p = target->prev;
				temp_n = target->next;
				if (temp_p)
					target->prev = temp_p->prev;
				target->next = temp_p;
				temp_p->prev = target;
				temp_p->next = temp_n;
				if (temp_n)
					temp_n->prev = temp_p;
				if (target->prev)
					target->prev->next = target;
				else
					*list = target;
				print_list(*list);
			}
			break;
		}
		ptr = ptr->next;
		target = ptr->prev;
	}
}
