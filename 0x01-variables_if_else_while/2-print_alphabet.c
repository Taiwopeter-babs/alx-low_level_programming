#include <stdio.h>

/**
  * main - This function prints alphabet in lowercase
  *
  * Return: 0
  */
int main(void)
{
	char ch;
	char new_line = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	putchar(new_line);
	return (0);
}
