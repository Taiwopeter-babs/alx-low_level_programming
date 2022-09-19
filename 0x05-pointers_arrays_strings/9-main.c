#include "main.h"
#include <stdio.h>

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	char *s = "I want to be a badass software engineer.";
	char s2[90];
	char *ptr;

	ptr = _strcpy(s2, s);

	printf("%s", s2);
	printf("%s", ptr);

	return (0);
}
