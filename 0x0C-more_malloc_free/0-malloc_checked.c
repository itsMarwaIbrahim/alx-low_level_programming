#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using (malloc)
 * @b: the numbers of bytes I want to allocated
 * Return: a pointer to the allocated memory (ptr)
 */
void *malloc_checked(unsigned int b)
{
	void *ptr_alloc_mem;
       
	ptr_alloc_mem = malloc(b);

	if (ptr_alloc_mem == NULL)
		exit(98);

	return (ptr_alloc_mem);
}
