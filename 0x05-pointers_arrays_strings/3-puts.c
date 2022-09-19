#include "main.h"

/**
 * _puts - prints a string
 * @str: paramter to be printed
 * Return: nothiing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
