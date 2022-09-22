#include "main.h"
#include <stdio.h>

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	char s[] = "Expect the best, prepare for the worst, Capitalize on what comes.\n";
	char *ptr;

	printf("%s", s);

	ptr = leet(s);
	printf("%s", ptr);

	

	return (0);
}
