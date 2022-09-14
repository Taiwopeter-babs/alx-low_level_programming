#include <stdio.h>
/**
 * multiple_of_three - compute the sum of multiples of 3 & 5
 * Return: 0 (success)
 */
void multiple_of_three(void)
{
	int i, t_sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			t_sum += i;
	}
	printf("%d\n", t_sum);

}
