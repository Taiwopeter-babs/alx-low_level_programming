#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds the integer arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: If only program name is passed, print 0;
 * if arguments > 1, check substrings of every
 * string, if it is a digit from 0-9, skip and check the next,
 * otherwise, print Error to stdout and return 1 i.e unsuccessful
 * Then, add the converted string to give the sum
 * Return: 0 or 1 depending on input
 */
int main(int argc, char **argv)
{
	int sum = 0;
	char **param, *ptr_val;

	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	if (argc > 1)
	{
		for (param = argv + 1; *param != argv[argc]; param++)
		{
			for (ptr_val = *param; *ptr_val != '\0'; ptr_val++)
			{
				if (*ptr_val >= '0' && *ptr_val <= '9')
				{
					continue;
				}
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(*param);
		}
		printf("%d\n", sum);
	}
	return (0);
}
