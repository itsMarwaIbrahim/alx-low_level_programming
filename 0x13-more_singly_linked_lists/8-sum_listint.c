#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of
 *		a listint_t linked list
 * @head: a pointer to the head of the linked listint_t list
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sumOfAllData;

	for (sumOfAllData = 0; head; head = (*head).next)
		sumOfAllData += (*head).n;

	return (sumOfAllData);
}
