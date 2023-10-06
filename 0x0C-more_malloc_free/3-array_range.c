#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an (array of integers)
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 * Return: the pointer to the newly created array
 *	if min greater than max return (NULL)
 *	if malloc fails return (NULL)
 */
int *array_range(int min, int max)
{
	int difference, i;
	int *range;
	int *ptr_memset;

	if (min > max)
		return (NULL);

	difference = max - min + 1;

	range = (int *)malloc(sizeof(int) * difference);
	if (range == NULL)
		return (NULL);

	ptr_memset = range;

	i = min;
	while (i <= max)	/* this loop is an alterntive of memset function */
	{
		*ptr_memset++ = i;
		i++;
	}

	return (range);
}
