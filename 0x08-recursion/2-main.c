#include "main.h"
#include <stdio.h>

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	int f;

	f = _strlen_recursion("Puts with recursion");
	printf("%d\n", f);
	return (0);
}
