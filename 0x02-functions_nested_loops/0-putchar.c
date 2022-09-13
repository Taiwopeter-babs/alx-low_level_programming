#include "main.h"

/**
 * print_putchar - prints out characters
 *
 * Return: 0
 */
int print_putchar(void)
{
	char array[] = {'_', 'p', 'u',
			't', 'c', 'h',
			'a', 'r', '\0'};
	int i = 0;

	while (array[i])
	{
		_putchar(array[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}

/**
 * main - calls the function
 *
 * Return: 0
 */
int main(void)
{
	print_putchar();

	return (0);
}
