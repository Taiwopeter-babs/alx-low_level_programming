#include "main.h"
#include <stdio.h>

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	char a[] = "look up";
	char *ptr;

	ptr = string_toupper(a);
	printf("%s", ptr);

	return (0);
}
