#include "lists.h"

/*
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the head of linked list
 * Return: the number of nodes (iterate)
 */
size_t print_list(const list_t *h)
{
	size_t node_count;

	for (node_count = 0; h; h = (*h).next, node_count++)
	{
		if ((*h).str)
			printf("[%d] %s\n", (*h).len, (*h).str);
		else
			printf("[0] (nil)\n");
	}
	return (node_count);
}
