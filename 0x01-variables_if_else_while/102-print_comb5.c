#include <stdio.h>

/**
 * main - prints unique combunation of two two-digit numbers
 *
 * Description: digit 1(one) is added to dg2 after every iteration
 * making sure that uniqueness is key in the combinations.
 * Return: 0
 */
int main(void)
{
	int dg1, dg2;

	for (dg1 = 0; dg1 <= 98; dg1++)
	{
		for (dg2 = dg1 + 1; dg2 <= 99; dg2++)
		{
			putchar(dg1 / 10 + '0');
			putchar(dg1 % 10 + '0');

			putchar(' ');

			putchar(dg2 / 10 + '0');
			putchar(dg2 % 10 + '0');


			if (dg1 + dg2 == 197)
				break;

			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');

	return (0);
}
