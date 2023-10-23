#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: a pointer to the head of the linked listint_t list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptrHead, *previousNode = NULL, *nextNode = NULL;

	for (ptrHead = *head; ptrHead; ptrHead = nextNode)
	{
		nextNode = (*ptrHead).next;
		(*ptrHead).next = previousNode;
		previousNode = ptrHead;
	}

	*head = previousNode;

	return (*head);
}
