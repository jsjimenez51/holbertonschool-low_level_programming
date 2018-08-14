#include "lists.h"

/**
* free_listint - a function that frees a listint_t list.
* @head: pointer to the head node of a list.
*
* Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
		return(NULL);

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
