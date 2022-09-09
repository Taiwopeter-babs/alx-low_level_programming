#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This function prints the last number of an integer
 *
 * Description: A random value of n is taken and
 * checked for the last digit.
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
