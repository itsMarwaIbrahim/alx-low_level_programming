#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously 
 *	created by your alloc_grid function
 * @grid:
 * @height:
 * Return:
 */
void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
