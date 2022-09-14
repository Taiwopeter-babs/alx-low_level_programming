#include "main.h"
#include <stdio.h>
/**
 * main - prints the fibonacci numbers which are even
 * and their values do not exceed 4,000,000
 * Return: 0 (success)
 */
int main(void)
{
	unsigned long int num1, num2, new_num, _limit;

	float t_sum;

	num1 = 1;
	num2 = 2;

	_limit = 4000000;
	new_num = num1 + num2;

	while (new_num < _limit)
	{
		new_num = num1 + num2;


		if ((new_num % 2) == 0)
			t_sum += new_num;


		num1 = num2;

		num2 = new_num;

	}
	printf("%.0f\n", t_sum);

	return (0);

}
