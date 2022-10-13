#include "variadic_functions.h"

/**
 * sum_them_all - sum all the paramters
 * @n: a constant number of parameters
 *
 * Return: 0 if n is 0, otherwise return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list int_args;

	if (n == 0)
		return (0);

	va_start(int_args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(int_args, int);
	}

	va_end(int_args);

	return (sum);
}
