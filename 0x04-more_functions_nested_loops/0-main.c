#include "main.h"

/**
 * main - calls the function in code block
 *
 * Return: 0
 */

int main(void)
{
	char c;

	c = _isupper('a');
	_putchar(c + '0');

	c = _isupper('Z');
	_putchar(c + '0');
	_putchar('\n');

	return (0);
}
