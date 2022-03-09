#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the 2 dimensional array of int using alloc_grid
 * @grid: dimensional array
 * @height: height
 * Return: Always 0 (Success);
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
