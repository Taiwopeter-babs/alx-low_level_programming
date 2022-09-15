#include "main.h"

/**
 * more_numbers - prints numbers 0-14 on ten lines
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0, j;
	char arr[] = "01234567891011121314";

	while (i < 10)
	{
		j = 0;

		while (arr[j])
		{
			_putchar(arr[j]);

			j++;
		}
		_putchar('\n');
		i++;
	}

}
