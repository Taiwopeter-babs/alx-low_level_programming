#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 98 fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned long int num1, num2, new_num;

	num1 = 1;
	num2 = 2;

	printf("%lu, %lu, ", num1, num2);

	for (i = 3; i <= 98; i++)
	{
		new_num = num1 + num2;

		printf("%lu", new_num);

		num1 = num2;

		num2 = new_num;

		if (i == 98)
			printf("\n");
		else
			printf(", ");
	}

	return (0);

}
