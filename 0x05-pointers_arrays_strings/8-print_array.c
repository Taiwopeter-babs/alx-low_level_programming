#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the amount of n spaecified for the array
 * @a: array to be printed from
 * @n: number of elements to print
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", *(a + i));
	}
	printf("%d", *(a + i));
	printf("\n");

}

