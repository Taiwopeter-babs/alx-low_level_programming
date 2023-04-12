#include "search_algos.h"
int inter_recur(int *array, size_t size, size_t low, size_t high, int value);
void print_array(int *array, size_t start, size_t end);
/**
 * interpolation_search - searches an array for a target with the interpolation
 * search algorithm
 * @array: pointer to first element in the array
 * @size: size of the array
 * @value: target value to search for
 * Return: index of the target if it's found, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;
	return (inter_recur(array, size, low, high, value));
}

/**
 * inter_recur - recursive function for the interpolation search algorithm
 * @array: pointer to the array
 * @low: starting position of search
 * @high: terminating position of search
 * @size: size of the array
 * @value: value to be searched for
 * Return: position of value, otherwise -1
 */
int inter_recur(int *array, size_t size, size_t low, size_t high, int value)
{
	int idx;
	size_t pos;

	if (low <= high && value >= array[low])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));

		if (pos > size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		if (array[pos] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			return (pos);
		}
		/**
		 * if current value of the position probe is less
		 * than the target value, set a new start for probe
		 */
		if (array[pos] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			idx =  inter_recur(array, size, pos + 1, high, value);
		}
		/**
		 * if the current value of the position probe is greater
		 * than the target value, set a new end for the probe
		 */
		if (array[pos] > value)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			idx = inter_recur(array, size, low, pos  - 1, value);
		}
	}
	return (idx);
}

/**
 * print_array - prints the array/subarray currently being searched
 * @array: pointer to the array
 * @start: starting position to print
 * @end: terminting position
 * Return: nothing
 */
void print_array(int *array, size_t start, size_t end)
{
	size_t i;


	i = start;
	while (i <= end)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i++;
	}
	printf("\n");
}
