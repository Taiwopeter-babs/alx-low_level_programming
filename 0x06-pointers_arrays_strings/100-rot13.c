#include "main.h"

/**
 * rot13 - encrypts a string into rot13
 * @str: string to be encrypted
 *
 * Description: The idea is to substitute characters
 * for corresponding 13th letter in the alphabet. ln21;
 * if the letter is present, substitute for letter in encryption
 * array.
 * Example: a -> n, A -> N, D -> Q, etc...
 * Return: pointer to string
 */
char *rot13(char *str)
{
	/* Declare dictionaries (arrays) of characters */
	int i;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char encryption[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *ptr = str;

	while (*str)
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == alphabet[i])
			{
				*str = encryption[i];
				break;

			}
		}
		str++;
	}
	return (ptr);

}

