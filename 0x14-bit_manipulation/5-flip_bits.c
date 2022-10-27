#include "main.h"
/**
 * flip_bits - check mismatching bits
 * @n: parameter number 1
 * @m: parameter number 2
 * Return: number of mismatching bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned int test1, test2;

	count = 0;

	while (n || m)
	{
		test1 = n & 1;
		test2 = m & 1;

		if (test1 != test2)
			count++;

		n = n >> 1;
		m = m >> 1;

	}
	return (count);
}
