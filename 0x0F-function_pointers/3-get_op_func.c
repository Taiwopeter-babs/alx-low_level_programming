#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - function to select operation function
 * @s: operator string => "*" or "+" or "%",...
 * Return: int
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	/* compare the string in ops[i].op and s with strcmp */
	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			break;
		}

		i++;
	}
	return (ops[i].f);
}
