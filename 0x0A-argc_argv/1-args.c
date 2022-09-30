#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments
 * assigning 0 to the first argument
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	argc = argc - 1;
	printf("%d\n", argc);

	return (0);
}
