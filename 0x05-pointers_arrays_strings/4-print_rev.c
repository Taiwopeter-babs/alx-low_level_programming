#include "main.h"
int string_length(char *string);

/**
 * print_rev - prints a string in reverse
 * @s: paramter to be printed
 *
 * Description: The key part of this function is in the swapping of the
 * characters. Iterate through for index less than half of the value
 * of the length. This is because as @dev swaps each starting and ending
 * value, the string is divided into half.
 *
 * Example: say *s = "Taiwo"; o for T, w for a. That's half the length.
 * Return: void
 */
void print_rev(char *s)
{
	int length, i;

	length = string_length(s);

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');

}

/**
 * string_length - computes the length
 * @string: parameter string
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
