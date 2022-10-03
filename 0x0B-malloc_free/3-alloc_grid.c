#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory to a 2-D array grid and intialize
 * @height: This is the number of rows
 * @width: This is the number of columns
 *
 * Return: pointer to 2-D array. if unsuccessful, return NULL
 */
int **alloc_grid(int height, int width)
{
	int h, w;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (NULL);

	/**
	 * allocate memory to row size and for each row,
	 * allocate column size
	 */
	ptr = malloc(height * sizeof(int *));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(width * sizeof(int));
	
		if (ptr[h] == NULL)
		{
			free(ptr[h]);
			return (NULL);
		}
	}
	/* initialize each element to 0 */
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			ptr[h][w] = 0;
			w++;
		}
		h++;
	}
	return (ptr);
}
