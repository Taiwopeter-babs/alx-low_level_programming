#include "main.h"
#include <stdio.h>
int is_a_digit(unsigned int _num);

/**
 * _atoi - extract integer from string and convert to integer
 * @s: parameter string
 *
 * Description: Initialize the int sign and unsigned num to 1 and 0
 * This is to ensure tracking is done with each additon of digit
 * The unsigned int num and i is used to contain large numerical
 * figures.
 * Return: integer converted
 */
int _atoi(char *s)
{
	int _number_sign;
	unsigned int num, i;

	_number_sign = 1;
	num = 0;

	/**
	 * check num if num is a digit, add to num. if there's a space,
	 *  after the digit, break addition
	 * For the sign, check if an element in the is a '-'.
	 */
	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_a_digit(s[i]))
		{
			num = num * 10 + (s[i] - '0');

			if (s[i + 1] == ' ')
			{
				break;
			}
		}
		else if (s[i] == '-')
		{
			_number_sign *= -1;
		}
	}

	return (num * _number_sign);

}

/**
 * is_a_digit - checks if character string is a digit
 * @_num: an unsigned integer
 *
 * Return: digit
 */
int is_a_digit(unsigned int _num)
{
	return (_num >= '0' && _num <= '9');
}
