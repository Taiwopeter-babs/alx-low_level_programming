#include "function_pointers.h"

/**
 * print_name -  prints the name string
 * @name: pointer to name string
 * @f: pointer to string as argument
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *str))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
