#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: store the address of the head pointer of listint_t list
 * @n: given data to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addNodeEnd, *storeTemp;

	addNodeEnd = (listint_t *)malloc(sizeof(listint_t));
	if (!addNodeEnd)
		return (NULL);

	(*addNodeEnd).n = n;
	(*addNodeEnd).next = NULL;

	if (!*head)
		*head = addNodeEnd;
	else
	{
		for (storeTemp = *head; (*storeTemp).next; storeTemp = (*storeTemp).next)
			;
		(*storeTemp).next = addNodeEnd;
	}

	return (addNodeEnd);
}
