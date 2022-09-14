#include "main.h"
#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	unsigned int num1, num2, new_num;

	num1 = 1;
	num2 = 2;

	printf("%d, %d, ", num1, num2);

	for (i = 3; i < 50; i++)
	{
		new_num = num1 + num2;
		
		printf("%u", new_num);

		num1 = num2;

		num2 = new_num;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);

}
