#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - this function frees 2 dimensional array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
