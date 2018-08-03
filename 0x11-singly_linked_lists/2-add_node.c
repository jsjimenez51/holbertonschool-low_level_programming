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
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the first head node.
 * @str: string to be copied into a new node.
 *
 * Return: address of the new element.
 * If fail return NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *insert;

	if ((!str) || (!head))
		exit(1);

	insert = malloc(sizeof(list_t));

	if (!insert)
		exit(2);

	insert->str = strdup(str);
	insert->len = _strlen(str);
	insert->next = *head;
	*head = insert;

	return (*head);
}
