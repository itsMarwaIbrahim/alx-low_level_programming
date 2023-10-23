#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list
 * @h: a pointer to the head of linked listint_t list
 * Return:
 */
size_t listint_len(const listint_t *h)
{
	size_t elemCount;
	for (elemCount = 0; h; elemCount++, h = (*h).next)
		;
	return (elemCount);
}
