#include "main.h"
int string_length(char *string);

/**
 * puts_half - prints half of the string characters
 * @str: paramter to be printed
 * Return: void
 */
void puts_half(char *str)
{
	int i, n, length;

	length = string_length(str);

	if (length % 2 == 0)
	{
		n = length / 2;

		for (i = n; i <= length - 1; i++)
			_putchar(*(str + i));
	}
	else
	{
		n = (length - 1) / 2;

		for (i = n + 1; i <= length - 1; i++)
			_putchar(*(str + i));
	}
	_putchar('\n');
}

/**
 * string_length - computes the length of the string
 * @string: param
 *
 * Return: length
 */
int string_length(char *string)
{
	int length = 0;

	while (*string != '\0')
	{
		length++;
		string++;
	}
	return (length);
}
