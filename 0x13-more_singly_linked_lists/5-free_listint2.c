#include "lists.h"

/**
 * free_listint2 - frees the listint_t list
 * @head: stores the address of another pointer
 *	to modify the head of the linked listint_t list
 * Return: void - nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *storeTemp, *next;

	if (!head)
		return;

	for (storeTemp = *head; storeTemp; storeTemp = next)
	{
		next = (*storeTemp).next;
		free(storeTemp);
	}

	*head = NULL;
}
