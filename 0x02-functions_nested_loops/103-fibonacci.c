#include "main.h"
#include <stdio.h>
/**
 * main - prints the fibonacci numbers which are even
 * and their values do not exceed 4,000,000
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int num1, num2, new_num, _limit, sum = 0;

	num1 = 1;
	num2 = 2;

	_limit = 4000000;


	while (num1 <= _limit)
	{
		sum += num1;

		new_num = num1 + num2;

		num1 = num2;

		num2 = new_num;

	}
	printf("%lu\n", sum);

	return (0);

}
