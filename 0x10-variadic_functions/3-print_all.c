#include "variadic_functions.h"
/**
 * print_ch - prints a character
 * @ch_args: variadic type va_list character
 * Return: nothing
 */
void print_ch(va_list ch_args)
{
	printf("%c", va_arg(ch_args, int));
}
/**
 * print_int - prints an integer
 * @int_args: variadic type va_list integer
 * Return: nothing
 */
void print_int(va_list int_args)
{
	printf("%d", va_arg(int_args, int));
}
/**
 * print_flt - prints a floating number
 * @flt_args: variadic type va_list floating
 * Return: nothing
 */
void print_flt(va_list flt_args)
{
	printf("%f", va_arg(flt_args, double));
}
/**
 * print_str - prints a string
 * @str_args: variadic type va_list string arguments
 * Return: nothing
 */
void print_str(va_list str_args)
{
	char *string = va_arg(str_args, char*);

	if (string == NULL)
		printf("(nil)");
	printf("%s", string);
}

/**
 * print_all - print anything with separator
 * @format: string of format specifiers
 * Return: nothing
 */
void print_all(const char *const format, ...)
{
	unsigned int i, j;
	print_type pr[] = {
			{"c", print_ch},
			{"s", print_str},
			{"f", print_flt},
			{"i", print_int},
			{NULL, NULL}
		};
	char *separator =  "";
	va_list v_args;

	va_start(v_args, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (pr[j].type != NULL)
		{
			if (*pr[j].type == format[i])
			{
				printf("%s", separator);
				pr[j].func(v_args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(v_args);
}
