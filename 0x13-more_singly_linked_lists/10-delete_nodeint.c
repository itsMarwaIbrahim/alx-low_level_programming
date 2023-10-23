#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 *		of a listint_t linked list
 * @head: a pointer to the head of the linked listint_t list
 * @index: the index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;

	listint_t *ptrHead, *storeTemp;

	if (!*head)
		return (-1);

	ptrHead = *head;
	if (!index)
	{
		*head = (**head).next;
		free(ptrHead);
		return (1);
	}

	for (counter = 0; counter < (index - 1); counter++)
	{
		ptrHead = (*ptrHead).next;
		if (!ptrHead)
			return (-1);
	}

	storeTemp = (*ptrHead).next;
	(*ptrHead).next = (*storeTemp).next;

	free(storeTemp);

	return (1);
}
