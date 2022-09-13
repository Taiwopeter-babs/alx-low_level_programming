#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 * @void - does not take any parameters
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
