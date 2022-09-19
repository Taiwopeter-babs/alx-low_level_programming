#include "main.h"
#include <stdio.h>

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	char s[10] = "My School";

	rev_string(s);
	printf("%s\n", s);

	return (0);
}
