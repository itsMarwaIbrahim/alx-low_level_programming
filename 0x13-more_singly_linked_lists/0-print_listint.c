#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the head of the linked listint_t list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeCount;

	for (nodeCount = 0; h; nodeCount++)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
	}

	return (nodeCount);
}
