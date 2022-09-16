#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * main - finds the largest prime factor
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int n = 612852475143, i, max_prime;

	while (n % 2 == 0)
	{
		/* printf("%d ", 2); */

		max_prime = 2;

		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;

			/* printf("%lu ", i); */

			n /= i;
		}
	}
	if (n > 2)
	{
		max_prime = n;

		/* printf("%lu ", n); */
	}
	putchar('\n');

	printf("%lu", max_prime);

	putchar('\n');

	return (0);
}
