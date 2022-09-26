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
    char *h = "any";
    char *u;

    u = _strstr(s, h);
    printf("%s\n", u);

    return (0);
}
