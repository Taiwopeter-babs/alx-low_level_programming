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

	int index = 0, make_random = 0, len_of_password = 10;

	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTERS[] = "ABCDEFGHIJLKMNOPQRSTUVWXYZ";
	char digits[] = "0123456789";
	char symbols[] = ",.!@#$";

	srand((unsigned int)(time(NULL)));

	char _password[len_of_password];

	make_random = rand() % 4;

	for (index = 0; index < len_of_password; index++)
	{
		if (make_random == 1)
		{
			_password[index] = digits[rand() % 10];
			make_random = rand() % 4;
			printf("%c", _password[index]);
		}
		else if (make_random == 2)
		{
			_password[index] = symbols[rand() % 6];
			make_random = rand() % 4;
			printf("%c", _password[index]);
		}
		else if (make_random == 3)
		{
			_password[index] = LETTERS[rand() % 26];
			make_random = rand() % 4;
			printf("%c", _password[index]);
		}
		else if (make_random == 4)
		{
			_password[index] = letters[rand() % 26];
			make_random = rand() % 4;
			printf("%c", _password[index]);
		}
	}
	printf("\n");


	return (0);
}

