#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello!!, world";
    char *h = "opc";
    char *u;

    u = _strpbrk(s, h);
    printf("%s\n", u);

    return (0);
}
