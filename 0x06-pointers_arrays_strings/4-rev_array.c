#include "main.h"

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: number of elements in the array.
 * Return: void
 */
void reverse_array(int *a, int n)
{
	  int i, j, tmp_holding;

	for (i = 0; i < (n - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			tmp_holding = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = tmp_holding;
		}
	}

}
