#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: array's width
 * @height: array's height
 * Return: NULL If width or height is 0 or negative or failure
 *	or return the pointer of 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i = 0, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	while (i < height)
	{
		*(ptr + i) = (int *)malloc(sizeof(int) * width);
		if (*(ptr + i) == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(*(ptr + k));
				*(ptr + k) = NULL;
			}
			free(ptr);
			return (NULL);
		}
		i++;
	}

	i = 0;
	while (i < height)
	{
		for (k = 0; k < width; k++)
			ptr[i][k] = 0;
		i++;
	}

	return (ptr);
}
