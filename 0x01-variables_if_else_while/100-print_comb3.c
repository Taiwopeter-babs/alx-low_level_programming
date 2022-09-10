#include <stdio.h>

/**
 * main - prints possible combo of numbers
 *
 * Description: cannot print 01 and 10. They are regarded
 * as same combination
 * Return: 0
 */
int main(void)
{
	int num;
	int num2;

	for (num = 0; num <= 9; num++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			if (num != num2 && num < num2)
			{
				putchar('0' + num);
				putchar('0' + num2);

				if (num + num2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
