#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints number of coins to return for change
 * @argc: number of strings in command line argument
 * @argv: array of strings in command line argument
 * index begins from 0
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, coin_change = 0;

	argc = argc - 1;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents -= 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents -= 2;
		else if (cents >= 1)
			cents -= 1;

		coin_change++;
	}
	printf("%d\n", coin_change);
	return (0);
}

