#include "function_pointers.h"

/**
 * array_iterator - iterates through an array and performs an "action"
 * @array: array to be iterated
 * @size: size of the array
 * @action: pointer to function to perform the task
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
