#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of square diagonal matrix
 * @a: array to be examined
 * @size: size of the square matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, main_sum, off_sum;

	main_sum = 0;
	off_sum = 0;

	for (i = 0; i < size; i++)
	{
		main_sum = main_sum + (*(a + (i * size) + i));

		off_sum = off_sum + (*(a + (i * size) + (size - i - 1)));


	}
	printf("%d, %d\n", main_sum, off_sum);
}

