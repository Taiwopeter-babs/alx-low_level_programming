#include "main.h"
void print_number(int n);

/**
 * reverse_array - reverses the content of an array
 * @a: array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	 int i;
	 int temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;

	}
	for (i = 0; i < n; i++)
	{
		print_number(a[i]);

		if (i < n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}


	_putchar('\n');

}
/**
 * print_number - print number using recursion
 * @n: number parameter
 * Return: void
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -number;
	}

	if (number / 10)
	{
		print_number(number / 10);
	}

	_putchar(number % 10 + '0');
}
