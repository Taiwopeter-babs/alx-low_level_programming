#include "main.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - generate random valid passwords
 *
 * Description: Initialize the int sign and unsigned num to 1 and 0
 * This is to ensure tracking is done with each additon of digit
 * The unsigned int num and i is used to contain large numerical
 * 
 * Return: integer converted
 */
int main(void)
{
	int seed, _password;

	seed = time(0);

	srand(seed);
	
	/* _password = (int *) malloc(10 * sizeof(int)); */

	_password = rand();

	printf("%i\n", _password);

	return (0);	
}

