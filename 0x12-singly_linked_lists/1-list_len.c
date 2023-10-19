#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a pointer to the head of linked list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elementsCount = 0;

	for (; h; h = (*h).next, elementsCount++)
		;
	return (elementsCount);
}
