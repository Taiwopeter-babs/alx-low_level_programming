#include "main.h"
int check_prime(int k, int n);
/**
 * is_prime_number - checks if a number is prime or not
 * @n: parameter int
 * Description: the value n is slashed by 2 to begin the test.
 * This is so because 2 is the least number that can multiply
 * a number to give a higher value. The value of n/2 is used to
 * begin the test and then it is reduced by 1 till it satisfies
 * any of the the base cases
 * it follows LIFO stack principle.
 * Return: 1 if prime, 0therwise 0
 */
int is_prime_number(int n)
{
	/* base cases */
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	/**
	 * function calls check_prime function
	 * This returns the result of the recursive call
	 */
	return (check_prime(n / 2, n));


}

/**
 * check_prime - checks if number is prime or not
 * @k: base value (2) to increment
 * @n: integer of interest
 * Return: 0 or 1
 */
int check_prime(int k, int n)
{
	if (k == 1)
		return (1);

	if (n % k == 0)
	{
		return (0);
	}
	/* recursive call */
	else
	{
		return (check_prime(k - 1, n));
	}


}

