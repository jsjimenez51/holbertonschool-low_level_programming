#include "lists.h"

/**
 * sum_dlistint - adds all elements of a list.
 * @head: a pointer to the beginning of a list.
 *
 * Return: sum of the elements of a list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	for (sum = 0 ; head != NULL; head = head->next)
		sum = sum + head->n;
	return (sum);
}
