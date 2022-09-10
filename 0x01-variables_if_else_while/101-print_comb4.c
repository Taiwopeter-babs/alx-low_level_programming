#include <stdio.h>

/**
 * main - prints non-repititve unique combination of three digits
 *
 * Return: 0
 */
int main(void)
{
	int dg1, dg2, dg3;

	for (dg1 = 0; dg1 <= 9; dg1++)
	{
		for (dg2 = 0; dg2 <= 9; dg2++)
		{
			for (dg3 = 0; dg3 <= 9; dg3++)
			{
				if ((dg3 > dg2) && (dg2 > dg1))
				{
					if ((dg3 != dg2) && (dg2 != dg1))
					{
					putchar('0' + dg1);
					putchar('0' + dg2);
					putchar('0' + dg3);

					if (dg1 + dg2 + dg3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
