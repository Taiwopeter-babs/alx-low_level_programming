#include "variadic_functions.h"

/**
 * print_strings - print strings with separator
 * @n: a constant number of parameters
 * @separator: string separating the strings
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list str_args;


	va_start(str_args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_args, char*);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
			printf("(nil)");

		if (separator)
		{
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(str_args);
}
