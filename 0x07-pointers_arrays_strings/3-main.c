#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hhhello, world";
    char *h = "oleh";
    unsigned int n;

    n = _strspn(s, h);
    printf("%d\n", n);

    return (0);
}
