#include "main.h"
#include <stdio.h>

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	int a[] = {10, 20, 30, -98, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	reverse_array(a, sizeof(a) / sizeof(int));

	return (0);
}
