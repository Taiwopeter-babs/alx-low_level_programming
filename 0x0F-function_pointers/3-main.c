#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - entry point of program
 * @argc: number of strings on the command line
 * @argv: array of strings on command line
 * Return: 0 or exits with a status
 */
int main(int argc, char *argv[])
{
	int operation_res, a, b;
	int (*f)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* initialize the function pointer to get_op_func(char *s) */
	f = get_op_func(argv[2]);
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	operation_res = f(a, b);
	printf("%d\n", operation_res);

	return (0);
}
