#include "main.h"
/**
 * _strlen_recursion - computes length of a string recursively
 * @s: parameter string
 * Description: The function adds 1 after each call.
 * if the char is not null, 1 is added and returned
 * The 1's are still on the stack, and add up after the string
 * reaches a null value, then the program terminates.
 * it follows LIFO stack principle.
 * Return: integer length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	/* recursive case terminates when end of string is reached */
	if (*s != '\0')
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
	return (0);

}

