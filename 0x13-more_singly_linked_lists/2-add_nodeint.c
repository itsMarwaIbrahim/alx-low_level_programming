#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: store the address of the head pointer of linstint_t
 * @n: given data to be stored in the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNode;

	addNode = malloc(sizeof(listint_t));
	if (!addNode)
		return (NULL);

	(*addNode).n = n;
	(*addNode).next = *head;
	*head = addNode;

	return (addNode);
}
