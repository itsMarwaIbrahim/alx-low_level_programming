#include "lists.h"

/**
 * free_listint - frees the listint_t list
 * @head: a pointer to the head of the linked listint_t list
 * Return: void - nothing
 */
void free_listint(listint_t *head)
{
	listint_t *storeTemp;

	for (; head; head = storeTemp)
	{
		storeTemp = (*head).next;
		free(head);
	}
}
