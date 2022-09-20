#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generate random valid passwords
 *
 * Return: integer converted
 */
int main(void)
{
	int _password;

	srand(time(0));
	
	_password = rand();

	printf("%i\n", _password);

	return (0);	
}

