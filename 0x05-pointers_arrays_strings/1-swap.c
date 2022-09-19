#include "main.h"

/**
 * swap_int - swaps values of integer variables
 * @a: paramter1
 * @b: paramter2
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;

	*a = y;
	*b = x;
}
