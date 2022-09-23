#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_buffer - prints the buffer parsed as argument
 * @b: buffer to be printed
 * @size: size of the buffer to check limit
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x:", i);

			for (j = i; j < i + 10; j++)
			{
				if (j % 2 == 0)
					printf(" ");
				if (j < size)
					printf("%02x", *(b + j));
				else
					printf("  ");
			}
			printf(" ");
			for (k = i; k < i + 10; k++)
			{
				if (k >= size)
					break;
				if (isprint(*(b + k)))
					printf("%c", *(b + k));
				else
					printf("%c", '.');
			}
			printf("\n");
		}
	}
}

