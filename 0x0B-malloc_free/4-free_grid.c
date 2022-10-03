#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-D grid
 * @grid: 2-D array
 * @height: similar to row of a matrix or first square bracket in an array
 * Return: void/nothing
 */
void free_grid(int **grid, int height)
{
	int h;

	if (grid != NULL && height != 0)
	{
		for (h = 0; h < height; h++)
		{
			free(grid[h]);
		}
		free(grid);
	}
}
