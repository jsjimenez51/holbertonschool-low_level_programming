#include "sort.h"

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
	listint_t *temp_n, *ptr;

	if (!*list)
		return;

	if (listint_len(*list) == 1)
		return;

	ptr = (*list)->next;
	while (ptr != NULL)
	{
		target = ptr->prev;
		while (target->prev != NULL)
		{
			if (target->n < target->prev->n)
			{
				target->prev = target->prev->prev;
				temp_n = target->next;
				target->next = target->prev;
				target->next->next = temp_n;
				target->next->prev = target;
				print_list(*list);
			}
			else
				break;
		}
		ptr = ptr->next;
	}
}
