#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
/**
 * print_error - prints "Error" to stdout
 * Return: nothing
 */
void print_error(void)
{
	int i;
	char arr[] = "Error";
	
	for (i = 0; arr[i]; i++)
		_putchar(arr[i]);
	_putchar('\n');
}
/**
 * is_digit - check for number 0 - 9
 * @ch: character to be checked
 * Return: 1 if ch is digit, otherwise 0
 */
int is_digit(char ch)
{
	return (ch >= '0' && ch <= '9');
}
/**
 * _atoi - converts character, if digit, to integer
 * @ch: character to be checked and converted
 * Return: int converted
 */
int _atoi(char *s)
{
	unsigned int i, num = 0;
	
	for (i = 0; s[i] != '\0'; i++)
		num = (num * 10) + (s[i] - '0');
	return (num);
}
/**
 * print_number - prints number to stdout with resursion
 * @n: number to be printed
 * Return: nothing
 */
void print_number(unsigned int num)
{
	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
/**
 * rev_string - prints a string in reverse
 * @s: paramter to be printed
 *
 * Description: The key part of this function is in the swapping of the
 * characters. Iterate through for index less than half of the value
 * of the length. This is because as @dev swaps each starting and ending
 * value, the string is divided into half.
 *
 * Example: say *s = "Taiwo babs" -> sbab owiaT
 * Return: void
 */
void rev_string(char *s)
{
	unsigned int i, len;
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
}

/**
 * main - Entry & execution point for multiplication
 * of two positive integers
 * @argc: number of string arguments
 * @argv: array of strings that holds the strings
 * Return: exit with 98 in case of an error, otherwise 0
 */
int main(int argc, char *argv[])
{
	unsigned int i, j, sum, carry, len1, len2;
	char *array;
	
	sum = 0;
	carry = 0;

	len1 = string_length(argv[1]);
	len2 = string_length(argv[2])

	if (len1 > len2)
		array = malloc(sizeof(char) * (len1 + 1));
	if (len2 > len1)
		array = malloc(sizeof(char) * (len2 + 1));

	if (argc < 3 || argc > 3)
	{
		print_error();
		exit (98);
	}
	
	for (i = 1; argv[i] != argv[argc]; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (is_digit(argv[i][j]))
				continue;
			else
			{
				print_error();
				exit (98);
			}
		}
		/* reverse the string */
		rev_string(argv[i]);
		for (j = 0; argv[i][j] != '\0'; j++)
			_putchar(argv[i][j]);
		_putchar('\n');

		for (j = 0; argv[i][j] != '\0'; j++);
		{
			sum = carry + (argv[i][j] - '0') + (argv[i + 1][j] - '0');
			carry = sum / 10;

			array[i - 1] = (sum % 10) + '0';

		}
		
	}




	return (0);
}

