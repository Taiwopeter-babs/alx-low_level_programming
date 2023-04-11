#include "search_algos.h"

/**
 * linear_search - searches an array for a target linearly/sequentially
 * @array: pointer to first element in the array
 * @size: size of the array
 * @value: target value to search for
 * Return: index of the target if it's found, otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		return (i);
		}
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}
	return (-1);
}
