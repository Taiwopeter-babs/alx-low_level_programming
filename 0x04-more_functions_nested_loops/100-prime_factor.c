#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor
 * @_number: number to be assessed
 *
 * Return: void
 */
void largest_prime_factor(long int _number)
{
	int prime, max_prime;

	while (_number % 2 == 0)
	{
		max_prime = 2;

		_number /= 2;
	}

	for (prime = 3; prime <= sqrt(_number); prime += 2)
	{
		while (_number % prime == 0)
		{
			_number /= prime;

			max_prime = prime;
		}
	}
	if (_number > 2)
	{
		max_prime = _number;
	}

	printf("%d\n", max_prime);

}

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{

	largest_prime_factor(612852475143);

	return (0);
}
