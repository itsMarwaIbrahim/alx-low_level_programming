#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: the first node of the linked list
 * @str: a string or character array
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int str_length = 0;
	list_t *new_end, *last_node;

	new_end = (list_t *)malloc(sizeof(list_t));
	if (!new_end)
		return (NULL);

	if (!str)
		return (NULL);

	while (str[str_length])
		str_length++;

	(*new_end).str = strdup(str);
	(*new_end).next = NULL;
	(*new_end).len = str_length;

	if (!*head)
	{
		*head = new_end;
		return (new_end);
	}

	last_node = *head;
	while ((*last_node).next)
		last_node = (*last_node).next;
	(*last_node).next = new_end;

	return (new_end);
}
