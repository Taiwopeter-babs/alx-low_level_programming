#include "search_algos.h"
int binary_recur(int *array, size_t start, size_t mid, size_t end, int value);
void print_array(int *array, size_t start, size_t end);
/**
 * exponential_search - searches an array for a target with the exponential
 * search algorithm
 * @array: pointer to first element in the array
 * @size: size of the array
 * @value: target value to search for
 * Return: index of the target if it's found, otherwise -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t start, end, half, mid, bound = 1;
	char *str;

	str = "Value found between indexes";

	if (!array)
		return (-1);

	while (bound <= size && array[bound] <= value)
	{
		/**
		 * Only print the index and value when the bound
		 * is less than the size and the value in the bound
		 * has a high probability of being in the array
		 */
		if (bound < size && array[size - 1] > array[bound])
			printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);

		bound *= 2;
		/**
		 * if the bound > size, set the bound to the index of the
		 * last element in the array
		 */
		if (bound > size)
			bound = size - 1;
		/**
		 * if the element in the bound index is within the range
		 * of value and the bound is < size
		 */
		if (array[bound] >= value && bound < size)
		{
			half = (bound / 2);
			if (array[bound] == value)
				return (bound);
			printf("%s [%lu] and [%lu]\n", str, half, bound);
		}
		/**
		 *  The bound is at the limit and the element is still lower than
		 * the target value
		 */
		else if (array[bound] < value && bound >= size)
		{
			bound = size - 1;
			half = (bound / 2) + 1;
			printf("%s [%lu] and [%lu]\n", str, half, bound);
			break;
		}
	}
	start = half;
	end = bound;
	mid = (start + end) / 2;

	print_array(array, half, end);

	return (binary_recur(array, start, mid, end, value));
}

/**
 * binary_recur - recursive function for the binary search algorithm
 * @array: pointer to the array
 * @start: starting position of search
 * @end: terminating position of search
 * @mid: midpoint of array
 * @value: value to be searched for
 * Return: position of value, otherwise -1
 */
int binary_recur(int *array, size_t start, size_t mid, size_t end, int value)
{
	size_t pos;

	if (start >= end || end <= start)
	{
		if (array[start] != value || array[end] != value)
			return (-1);
	}
	if (array[mid] == value)
		return (mid);
	if (array[mid] < value)
	{
		start = mid + 1;
		mid = (start + end) / 2;
		print_array(array, start, end);
		pos = binary_recur(array, start, mid, end, value);
	}
	if (array[mid] > value)
	{
		end = mid - 1;
		mid = (start + end) / 2;
		print_array(array, start, end);
		pos = binary_recur(array, start, mid, end, value);
	}
	return (pos);
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
	char *sep = "";

	printf("Searching in array: ");
	i = start;
	while (i <= end)
	{
		printf("%s%d", sep, array[i]);
		sep = ", ";
		i++;
	}
	printf("\n");
}
