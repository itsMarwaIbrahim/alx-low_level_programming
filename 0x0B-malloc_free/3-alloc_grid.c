#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: integer
 * @height: integer
 * Return:
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
			for (k = 0; k < i; i++)
				free(*(ptr + k));
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
