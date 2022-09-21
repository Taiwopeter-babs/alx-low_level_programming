#include "main.h"

/**
 * _strcmp - compares strings
 * @s1: right string
 * @s2: left string
 * Description: If the unequal character in the left string
 * has a greater ASCII value than the corresponding char. in the right string,
 * a positive value is returned, otherwise if has a less ASCII value,
 * a negative
 * value is returned. The values accumulate till the end of the string.
 * If both are equal, then a value of zero is reyurned
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	 int flag = 0;
	 int i = 0;

	while (flag == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		flag += *(s1 + i) - *(s2 + i);
		s1++;
		s2++;
		i++;
	}


	return (flag);

}
