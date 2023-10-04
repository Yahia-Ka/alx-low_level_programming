#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the 2d grid created in prev project
 * @grid: double pointer 2d grid
 * @height: the height of the grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
