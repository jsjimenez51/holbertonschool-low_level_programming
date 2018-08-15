#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of a listint_t linked list.
 * @head: pointer to the head node of a list.
 *
 * Return: 0 if list is empty, else the sum of all the data of a list.
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
