#include "main.h"
#include <stdio.h>

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	char *str;
	int len;

	str = "my First strlen!";

	len = _strlen(str);

	printf("len: %d\n", len);
	return (0);
}
