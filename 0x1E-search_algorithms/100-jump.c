#include "search_algos.h"
int lin_search(int *array, size_t start, size_t end, int value);


/**
 * jump_search - implements the jump search algorithm
 * @array: pointer to first element in the array
 * @size: size of the array
 * @value: target value to be found in the array
 * Return: index of value in the array if found, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump;
	int sroot, idx;
	char *str, *cstr;

	if (!array)
		return (-1);
	str = "Value found between indexes";
	cstr = "Value checked array";

	/**
	 * get square root of the array size
	 * This will be the jump interval
	 */
	sroot = (int)(sqrt(size));

	jump = 0;
	while (jump < size)
	{
		if (value > array[jump])
			printf("%s[%lu] = [%d]\n", cstr, jump, array[jump]);

		if (value <= array[jump])
		{
			printf("%s [%lu] and [%lu]\n", str, jump - sroot, jump);
			idx = lin_search(array, jump - sroot, jump + 1, value);
			return (idx);
		}
		else if (value > array[jump] && jump + sroot >= size)
		{
			printf("%s [%lu] and [%lu]\n", str, jump, jump + sroot);
			idx = lin_search(array, jump, size, value);
			return (idx);
		}
		jump += sroot;
	}
	return (-1);
}
/**
 * lin_search - searches an array for a target linearly/sequentially
 * @array: pointer to first element in the array
 * @start: starting index of search
 * @end: terminating index of start
 * @value: target value to search for
 * Return: index of the target if it's found, otherwise -1
 */
int lin_search(int *array, size_t start, size_t end, int value)
{
	size_t i;
	char *str = "Value checked array";

	for (i = start; i < end; i++)
	{
		if (array[i] == value)
		{
			printf("%s[%lu] = [%d]\n", str, i, array[i]);
			return (i);
		}
		printf("%s[%lu] = [%d]\n", str, i, array[i]);
	}
	return (-1);
}
