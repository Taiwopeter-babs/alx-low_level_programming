#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds the integer arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: If only program name is passed, print 0;
 * if arguments > 1, check substrings of every
 * string, if it is a digit from 0-9, skip and check the next,
 * otherwise, print Error to stdout and return 1 i.e unsuccessful
 * Then, add the converted string to give the sum
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	if (argc > 1)
	{
		for (i = 1; argv[i] != argv[argc]; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isdigit(argv[i][j]))
				{
					continue;	
				}
				else
				{
					printf("error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			
		}
		printf("%d\n", sum);
	}


	return (0);
}
