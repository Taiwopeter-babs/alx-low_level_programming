#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - structure to take members
 * @type: The type/format specifier
 * @func: pointer to function that prints a format specified
 */
struct print 
{
	char *type;
	void (*func)(va_list);
};

typedef struct print print_type;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#endif /* VARIADIC_FUNCTIONS_H */
