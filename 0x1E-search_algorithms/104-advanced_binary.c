#include "search_algos.h"
int binary_recur(int *array, size_t start, size_t mid, size_t end, int value);
void print_array(int *array, size_t start, size_t end);
/**
 * advanced_binary - searches an array for a target with an
 * advanced binary search algorithm
 * @array: pointer to first element in the array
 * @size: size of the array
 * @value: target value to search for
 * Return: index of the target if it's found, otherwise -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t start, end, mid;

	if (!array)
		return (-1);

	start = 0;
	end = size;
	mid = (start + end) / 2;
	print_array(array, 0, size - 1);

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

	if (start == end && array[end] != value)
		return (-1);

	if (array[mid] == value)
	{
		/**
		 * if the preceeding element in the array != value,
		 * it means the middle element is the first of its type
		 */
		if (array[mid - 1] != value)
			return (mid);
		/**
		 * otherwise perform the recursive search for the
		 * first of the element's type by going down the array
		 */
		end = mid;
		mid = (start + end) / 2;
		print_array(array, start, end);
		return (binary_recur(array, start, mid, end, value));
	}
	if (array[mid] < value)
	{
		start = mid + 1;
		mid = (start + end) / 2;
		print_array(array, start, end);
		return (binary_recur(array, start, mid, end, value));
	}
	if (array[mid] >= value)
	{
		end = mid;
		mid = (start + end) / 2;
		print_array(array, start, end);
		return (binary_recur(array, start, mid, end, value));
	}
	return (-1);
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
