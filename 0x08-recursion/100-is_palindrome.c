#include "main.h"
int check_palindrome(char *s, int n1, int n2);
int stringlen(char *string);
/**
 * stringlen - computes the length of the string
 * @string: string parameter
 *
 * Return: integer length
 */
int stringlen(char *string)
{
	if (*string == '\0')
	{
		return (0);
	}
	if (*string != '\0')
	{
		return (1 + stringlen(string + 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string parameter
 *
 * Decsription: This function gets the length of a string s
 * sets an empty char to 1 i.e empty is a palindrome
 * then calls the check_pal function.
 * Return: result from check_pal
 */
int is_palindrome(char *s)
{
	int n1, n2;

	n1 = 0;
	n2 = stringlen(s) - 1;

	if (*s == '\0')
	{
		return (1);
	}

	return (check_palindrome(s, n1, n2));
}

/**
 * check_palindrome - does the checking of each char in a string
 * @s: the s string (similar code is available but applies loops)
 * check (palindrome.c)
 * @n1: integer set to the start of the string
 * @n2: integer set to the length of string
 * Description: check if the last and first string are equal
 * if true, check if the digits are equal or if the first digit
 * will be equal to the 2nd digit + 1. Note that this means that
 * you have to test till the numbers are either equal or if n1 manages
 * to be increased more than n2. if this happens, that means n1 and n2 are at
 * half point of the string. Otherwise if the beginning AND ending
 * characters are NOT EQUAL then the string is not a palindrome
 * Return: 0 or 1 based on the result
 */
int check_palindrome(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 + 1 || n1 == n2)
		{
			return (1);
		}
		return (check_palindrome(s, n1 + 1, n2 - 1));
	}

	else
	{
		return (0);
	}
}
