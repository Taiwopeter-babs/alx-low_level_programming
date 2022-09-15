#include "main.h"
#include <stdio.h>

/**
 * main - prints integers from 1- 100, then fizz-buzz
 *
 * Description: function prints numbers from 1-100, then substitutes
 * multiples of 3 for fizz, multiples of 5 for buzz, and multiples
 * of both 3 and 5 for fizzbuzz
 * Example:
 *	main() --> 1, 2, Fizz, 4, Buzz,..., 14, FizzBuzz...
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i == 100)
			printf("Buzz");
	}
	printf("\n");

	return (0);
}
