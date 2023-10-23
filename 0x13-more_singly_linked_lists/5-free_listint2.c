#include "lists.h"

/**
 * free_listint2 - frees the listint_t list
 * @head: stores the address of another pointer
 *	to modify the head of the linked listint_t list
 * Return: void - nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *storeTemp;

	for (storeTemp = *head; *head; storeTemp = *head)
	{
		*head = (*head)->next;
		free(storeTemp);
	}
	*head = NULL;
}
