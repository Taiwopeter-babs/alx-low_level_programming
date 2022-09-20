#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generate random valid passwords
 *
 * Return: integer converted
 */
int main(void)
{
	int *_password;

	srand((unsigned int) (time(NULL)));

	_password = (int *) malloc(10 * sizeof(int));

	*_password = rand();

	printf("%i\n", *_password);

	return (0);
}

