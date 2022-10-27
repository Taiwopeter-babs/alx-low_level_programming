#include "main.h"
int is_bin(int digit);
/**
 * binary_to_uint - convert a string of binary to unsigned int
 * @b: string containing binary characters
 * Return: 0 if string is NULL, 0 if any char is not 0 or 1
 * otherwisw unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum, base, temp;
	int j, len;

	base = 1;
	sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (!is_bin(b[i]))
			return (0);
	}
	for (len = 0; b[len]; len++)
		;

	for (j = len - 1; j >= 0; j--)
	{
		temp = b[j] - '0';
		sum += temp * base;
		base *= 2;
	}
	return (sum);
}
/**
 * is_bin - checks for binary representation
 * @digit: parameter
 * Return: 0 or 1
 */
int is_bin(int digit)
{
	return (digit == '0' || digit == '1');
}
