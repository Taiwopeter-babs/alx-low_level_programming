#include "main.h"
int string_length(char*);

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
	int i, len;
	char *first_char, *last_char, ch;
	/* compute length */
	len = string_length(s);

	/* set the *first_char & *last_char to the beginning of the string */
	first_char = s;
	last_char = s;

	/* move the *last_char to the last character */
	for (i = 0; i < (len - 1); i++)
	{
		last_char++;
	}

	/* swap the characters and update pointer positions*/
	for (i = 0; i < (len / 2); i++)
	{
		ch = *last_char;
		*last_char = *first_char;
		*first_char = ch;
		
		first_char++;
		last_char--;
		
	}
	_putchar('\n');
}

/**
 * string_length - computes the length
 * @stri: parameter string
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
