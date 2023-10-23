#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 *		and returns the head node’s data (n)
 * @head: stores the address of another pointer
 *		to modify the head of the linked listint_t list
 * Return: the previous head node value of n member
 */
int pop_listint(listint_t **head)
{
	int storeData;
	listint_t *storeTemp;

	if (!*head)
		return (0);

	storeData = (*head)->n;
	storeTemp = *head;
	*head = (*head)->next;
	free(storeTemp);

	return (storeData);
}
