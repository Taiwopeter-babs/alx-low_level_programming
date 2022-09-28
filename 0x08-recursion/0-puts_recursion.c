#include "main.h"

/**
 * _puts_recursion - prints a string in recursive function
 * @s: parameter string
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;

	/* recursive case */
	_puts_recursion(s);


}

