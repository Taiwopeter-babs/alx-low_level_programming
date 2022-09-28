#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: parameter string
 * Description: The function is called recursively first until the
 * pointer points to the last character before null. Then, an unrolling
 * occurs on the stack where the character the pointer is pointing to
 * gets printed out first. it follows LIFO stack principle.
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	/* recursive case terminates when end of string is reached */
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}


}
