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

	i = 0;

	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");

}

