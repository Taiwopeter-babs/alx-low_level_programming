#include "variadic_functions.h"

/**
 * print_all - print anything with separator
 * @format: string of format specifiers
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	unsigned int i;
	char ch;
	float flt;
	char *str, *separator = "";
	const char *travelformat;
	va_list _args;

	va_start(_args, format);

	travelformat = format;
	while (*travelformat != '\0')
	{
		printf("%s", separator);
		switch (*travelformat)
		{

			case 'c':
				ch = va_arg(_args, int);
				printf("%c", ch);
				break;
			case 'i':
				i = va_arg(_args, int);
				printf("%d", i);
				break;
			case 'f':
				flt = va_arg(_args, int);
				printf("%f", flt);
				break;
			case 's':
				str = va_arg(_args, char*);
				if (str != NULL)
					printf("%s", str);
				if (str == NULL)
					printf("(nil)");
				break;
			default:
				break;
			separator = ", ";

		}
		travelformat++;
	}
	printf("\n");
	va_end(_args);

}
