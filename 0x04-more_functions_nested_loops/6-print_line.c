#include "main.h"

/**
 * print_line - prints a straight line
 * @n: parameter
 *
 * Description: function takes n as a parameter and prints "_"
 * n times. 
 * Example: 
 *	print_line(5); --> _____ 
 * Return: 0
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	else if (n <= 0)
		_putchar('\n');
	
	_putchar('\n');
}
