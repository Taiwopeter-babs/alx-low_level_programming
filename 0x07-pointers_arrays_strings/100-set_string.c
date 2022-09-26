#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to be set
 * @to: value to be set
 * Return: void
 */
void set_string(char **s, char *to)
{
	/**
	 * dereferencing a double pointer once takes
	 * the address of the original value the single
	 * pointer points to
	 */

	*s = to;

}

