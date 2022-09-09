#include <stdio.h>

/**
 * main - prints numbers with putchar
 *
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
