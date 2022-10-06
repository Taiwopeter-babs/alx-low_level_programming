#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting value of array
 * @max: terminating value of array.
 * Return: pointer to resulting string
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * (max + 2) - min);

	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		*(ptr + i) = min;

		i++;
		min++;
	}
	*(ptr + i) = '\0';

	return (ptr);
}
