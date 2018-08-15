#include "lists.h"

/**
 * _strlen - finds length of node string.
 * @s: pointer to the string.
 *
 * Return: length of the string.
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to given node.
 * @str: string to be copied into a new node.
 *
 * Return: address of the new element.
 * If fail retrun NULL.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *insert, *endof;

	if (!head)
		exit(1);

	endof = *head;

	insert = malloc(sizeof(list_t));

	if (!insert)
		exit(2);

	insert->str = strdup(str);
	insert->len = _strlen(str);
	insert->next = NULL;

	if (!*head)
	{
		*head = insert;
		return (*head);
	}
	while (endof->next)
		endof = endof->next;
	endof->next = insert;
	return (*head);
}
