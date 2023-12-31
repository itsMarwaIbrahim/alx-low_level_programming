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
	unsigned int index = 0, sum;

	if (nmemb == 0 || size == 0)
		return (NULL);

	sum = nmemb * size;
	ptr_calloc = malloc(sum);
	if (ptr_calloc == NULL) /* if it fails to allocate, return NULL */
		return (NULL);

	container = ptr_calloc;
	if (ptr_calloc != NULL)
	{
		while (index < sum) /* this loop is replacing memset function */
		{
			container[index] = 0;
			index++;
		}
	}

	return (ptr_calloc);
}
