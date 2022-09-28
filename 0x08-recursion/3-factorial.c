#include "main.h"
/**
 * factorial - computes factorial of an integer recursively
 * @n: parameter number
 * Description: The function stores the multiplication of each factorial
 * number of stacks and computes them when base value is fulfilled
 * it follows LIFO stack principle.
 * Return: factorial
 */
int factorial(int n)
{
	/* base cases */
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	/* recursive case terminates when base value is satisfied */
	return (n * factorial(n - 1));

	return (0);

}

