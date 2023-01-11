#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid to free
 * @height: number of rows in grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	for ( ; height != 0; height--)
		free(grid[height - 1]);
	free(grid);
}
