#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function to allocates memory for an array
 * @nmemb:
 * @size:
 * Return: a pointer to the allocated memory
 * 	If nmemb or size is 0, then _calloc returns NULL
 * 	If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr_calloc, index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr_calloc = (unsigned int *)malloc(nmemb * size);

	if (ptr_calloc == NULL)
		return (NULL);
	if (ptr_calloc != NULL)
	{
		while (index < size)
		{
			ptr_calloc[index] = 0;
			index++;
		}
	}
	if (ptr_calloc == NULL)
		return (NULL);
	return (ptr_calloc);
}
