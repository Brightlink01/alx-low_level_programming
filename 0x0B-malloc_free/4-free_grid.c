#include <stdlib.h>

/**
 * free_grid - Free a the two dimensional grid
 *
 * @grid: The free up the grids
 * @height: The number of rows in the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
