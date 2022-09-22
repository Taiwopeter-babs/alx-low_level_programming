#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to be encoded
 *
 * Description: The idea is to substitute specified characters
 * for specified numbers. ln20; while the string is not null value,
 * loop through the arrays (0 - 4). check if any character of the string
 * is in the letters array, then substitute for the number (converted
 * to a character)
 * Return: pointer to string
 */
char *leet(char *str)
{
	/* Declare dictionaries (arrays) of characters */
	int i;
	char lower_case[] = {'a', 'e', 'o', 't', 'l'};
	char upper_case[] = {'A', 'E', 'O', 'T', 'L'};
	char numbers[] = {4, 3, 0, 7, 1};
	char *encode = str;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == lower_case[i] || *str == upper_case[i])
			{
				*str = numbers[i] + '0';

			}
		}
		str++;
	}
	return (encode);

}

