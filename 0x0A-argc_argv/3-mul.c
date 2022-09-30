#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the integer arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int product = 1;


	if (argc > 1 && argc <= 3)
	{
		i = 1;
		while (i < argc)
		{
			product *= atoi(argv[i]);
			i++;
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
