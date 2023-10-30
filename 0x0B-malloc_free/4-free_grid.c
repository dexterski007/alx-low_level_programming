#include <stdlib.h>

/**
 * free_grid - is to concatenate
 *
 * @grid: grid address
 * @height: height of the grid
 *
 * Return: nada
**/

void free_grid(int **grid, int height)

{
	int j = 0;

	for (j = 0; j < height; j++)
	free(grid[j]);
	free(grid);
}
