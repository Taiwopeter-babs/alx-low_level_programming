#include "function_pointers.h"

/**
 * int_index - iterates through an array and performs a "cmp",
 * then returns index of element if it evaluates to non-zero value
 * @array: array to be iterated
 * @size: size of the array
 * @cmp: pointer to function to perform the task
 *
 * Return: integer => index if it evaluates to non-zero value, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (0);
}
