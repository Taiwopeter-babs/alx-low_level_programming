#include "main.h"
#include <stdio.h>

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	int x, y;

	x = 76;
	y = 89;

	swap_int(&x, &y);
	printf("x is now: %d\ny is now: %d\n", x, y);
	return (0);
}
