#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: right string
 * @s2: left string
 * Description: If the unequal character in the left string
 * has a greater ASCII value than the corresponding char. in the right string,
 * a positive value is returned, otherwise if has a less ASCII value, a negative 
 * value is returned. The values accumulate till the end of the string.
 * If both are equal, then a value of zero is reyurned
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	 int flag = 0;

	 while (*s1 != *s2 && *s1 != '\0')
	{	
		if (*s1 == *s2)
		{
			flag += 0;
		}
		else if (*s1 < *s2)
		{
			flag += -1;
		}
		else if (*s1 == '\0' && *s2 != '\0')
		{
			flag += -1;
		}
		else if (*s1 != '\0' && *s2 == '\0')
		{
			flag += 1;
		}
		else if (*s1 > *s2)
		{
			flag += 1;
		}
		s1++;
		s2++;
	}


	return (flag);

}
