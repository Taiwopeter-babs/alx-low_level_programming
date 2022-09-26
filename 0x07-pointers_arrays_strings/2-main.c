#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello!!";
    char *h;

    h = _strchr(s, 'u');
    printf("%s\n", h);

    return (0);
}
