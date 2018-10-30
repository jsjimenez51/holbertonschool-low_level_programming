#include "sort.h"

/**
 *swap - swap the top two elements of the list
 *@list: beginning of list
 *Return: void
 */
void swap(listint_t **list)
{
	int temp

	temp = (*list)->n;
}

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

	if (!*list)
		return;

	if listint_len(*list) == 1
		return (*list);

	while (target->prev != NULL)
	{
		if (target->n < target->prev->n)
			swap;
		else
			break;
	}
	set target to next node;
}
