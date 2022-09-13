#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints number, n to 98
 * @n: paramter1 parsed to function
 *
 * Return: s
 */
void print_to_98(int n)
{
	int _count;
	int _lastvalue = 98;

	if (n > 98)
	{
		for (_count = n; _count > 98; _count--)
			printf("%d, ", _count);
	}
	else
	{
		for (_count = n; _count < 98; _count++)
			printf("%d, ", _count);
	}
	printf("%d\n", _lastvalue);
}
