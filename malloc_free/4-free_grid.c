#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional,
 * grid prev created by your alloc_grid function
 * @grid: grid of alloc grid
 * @height: height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
	return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
