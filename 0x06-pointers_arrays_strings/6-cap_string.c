#include "main.h"

/**
 * cap_string - Captalize all the words of a string
 * @ptr: pointer to string to capitalize
 * Description: word_sep[] is an array of word separators.
 * capitalize is set as true, so it 'short-circuits' the condition
 * and executes the expression
 * Return: to resulting pointer string
 */
char *cap_string(char *str)
{
	char *ptr = str;
	int i, capitalize = 1;

	char word_sep[] = " \t\n,.!?\"{}()";
	
	/* capitalize is true, so all the first letters are capitalized */
	while (*str)
	{
		if (capitalize && *str >= 'a' && *str <= 'z')
			*str = (*str - 'a') + 'A';

		capitalize = 0;
		
		for (i = 0; i < 12; i++)
		{
			if (*str == word_sep[i])
				capitalize = 1;
		}
		str++;
	}
	


	return (ptr);
}

