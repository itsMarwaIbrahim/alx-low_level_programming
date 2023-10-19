#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a double pointer to the head of the list_t list
 * @str: a pointer to a constant character string
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	unsigned int str_length = 0;

	add_node = (list_t *)malloc(sizeof(list_t));
	if (!add_node)
		return (NULL);

	while (str[str_length])
		str_length++;

	(*add_node).str = strdup(str);

	if (!(*add_node).str)
	{
		free(add_node);
		return (NULL);
	}

	(*add_node).len = str_length;
	(*add_node).next = *head;
	*head = add_node;

	return (*head);
}
