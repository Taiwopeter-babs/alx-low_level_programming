#include "main.h"
int find_sqrt(int k, int n);
/**
 * _sqrt_recursion - computes the root of an integer x recursively
 * @n: parameter int
 * Description: find_sqrt function does the bulk of the work
 * a base value k -> 2 is set, because 2 is the least value/integer
 * that can be the result of a square root. If a recursive call
 * satisfies the first if condition, it MUST terminate the program.
 * i.e it must return k or -1
 * it follows LIFO stack principle.
 * Return: the value of k or -1
 */
int _sqrt_recursion(int n)
{
	/* base cases */
	if (n == 0)
		return (0);
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	/**
	 * function calls find_sqrt function
	 * This returns the result of the recursive call
	 */
	return (find_sqrt(2, n));


}

/**
 * find_sqrt - returns the value of sqrt or -1
 * @k: base value (2) to increment
 * @n: integer of interest
 * Return: sqrt or -1
 */
int find_sqrt(int k, int n)
{
	if (k % (n / k) == 0)
	{
		if (k * (n / k) == n)
			return (k);
		else
			return (-1);

	}
	return (0 + find_sqrt(k + 1, n));
}

