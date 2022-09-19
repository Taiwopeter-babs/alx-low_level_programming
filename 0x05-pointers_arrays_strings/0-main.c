#include "main.h"
#include <stdio.h>

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = 76;

	reset_to_98(&n);
	printf("n is now: %d", n);
	return (0);
}
