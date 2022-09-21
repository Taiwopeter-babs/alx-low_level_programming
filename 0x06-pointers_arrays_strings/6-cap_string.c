#include "main.h"

/**
 * cap_string - Captalize words all the words of a string
 * @ptr: pointer to string
 * Description: word_sep[] is an array of word separators ascii codes
 * Return: to pointer string
 */
char *cap_string(char *ptr)
{
	int i, _count = 0;

	int word_sep[] = {125, 123, 41, 40, 34, 63, 33, 46, 59, 44, 10, 9, 32};

	/* convert all words to lowercase */
	if (*(ptr + _count) >= 'a' && *(ptr + _count) <= 'z')
	{
		*(ptr + _count) = (*(ptr + _count) - 'A') + 'a';
	}
	_count++;

	while (*(ptr + _count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(ptr + _count) == word_sep[i])
			{
				if (*(ptr + (_count + 1)) >= 'a' && (*(ptr + (_count + 1)) <= 'z'))
					*(ptr + (_count + 1)) = (*(ptr + (_count + 1)) - 'a') + 'A';
			}
		}
		_count++;
	}

	return (ptr);
}

