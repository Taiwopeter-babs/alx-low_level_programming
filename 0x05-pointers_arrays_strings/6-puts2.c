#include "main.h"
int string_length(char *string);

/**
 * puts2 - prints characters that have odd-numbered index
 * @str: paramter to be printed
 * Return: void
 */
void puts2(char *str)
{
	int i, length;

	length = string_length(str);

	for (i = 0; i <= length; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*(str + i));
		}
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
