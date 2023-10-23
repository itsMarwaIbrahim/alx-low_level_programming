#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: a pointer to the head of the linked listint_t list
 * @idx: the index of the list where the new node should be added
 * @n: the value to be stored
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptrHead;
	unsigned int counter = 0;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	(*new).n = n;

	if (idx)
	{
		ptrHead = *head;
		while (counter < (idx - 1))
		{
			if (!ptrHead)
			{
				free(new);
				return (NULL);
			}
			ptrHead = (*ptrHead).next;
			counter++;
		}
		(*new).next = (*ptrHead).next;
		(*ptrHead).next = new;
	}
	else
	{
		(*new).next = *head;
		*head = new;
	}
	return (new);
}
