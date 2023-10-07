#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function to allocates memory for an array
 * @nmemb: array
 * @size: bytes
 * Return: a pointer to the allocated memory
 *	If nmemb or size is 0, then _calloc returns NULL
 *	If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr_calloc;
	char *container;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr_calloc = malloc(nmemb * size);
	if (ptr_calloc == NULL) /* if it fails to allocate, return NULL */
		return (NULL);

	container = ptr_calloc;
	if (ptr_calloc != NULL)
	{
		while (index < size) /* this loop is replacing memset function */
			container[index++] = 0;
	}
	if (ptr_calloc == NULL)
		return (NULL);
	free(ptr_calloc);

	return (ptr_calloc);
}
