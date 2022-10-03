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
	 * allocate memory to row size,
	 * allocate memory of height x width and let ptr point to it
	 */
	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	/* allocate memory to each column */
	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(width * sizeof(int));

		if (ptr[h] == NULL)
		{
			/* free each row */
			for (h = 0; h < height; h++)
				free(ptr[h]);
			free(ptr);
			return (NULL);
		}
	}
	/* initialize each element to 0 */
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			*(*(ptr + h) + w) = 0;
			w++;
		}
	}
	return (ptr);
}
