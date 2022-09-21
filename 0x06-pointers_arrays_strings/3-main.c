#include "main.h"
#include <stdio.h>

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	char s1[] = "Hellhghhjjo";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));

	return (0);
}
