#include "lists.h"

/*
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the head of linked list
 * Return: the number of nodes (iterate)
 */
size_t print_list(const list_t *h)
{
	size_t iterate;

	for (iterate = 0; h; h = (*h).next; iterate++)
	{
		if ((*h).str)
			printf("%s\n", (*h).str);
		else
			printf("[0] (nil)\n");
	}
	return (iterate);
}
