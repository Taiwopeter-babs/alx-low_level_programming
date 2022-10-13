#include "variadic_functions.h"

/**
 * print_numbers - print numbers with separator
 * @n: a constant number of parameters
 * @separator: string separating the numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;
	va_list int_args;


	va_start(int_args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(int_args, int);
		printf("%d", num);

		if (separator)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(int_args);
}
