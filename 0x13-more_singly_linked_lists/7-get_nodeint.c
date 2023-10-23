#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of
 *		a listint_t linked list
 * @head: a pointer to the head of the linked listint_t list
 * @index: represents the index of the node to retrieve
 * Return: returns the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	litstint_t *storeTemp;
	unsigned int counter = 0;

	if (!head)
		return (NULL);

	for (storeTemp = head; storeTemp; counter++)
	{
		if (counter == index)
			return (storeTemp);
		storeTemp = (*storeTemp).next;
	}

	return (NULL);
}
