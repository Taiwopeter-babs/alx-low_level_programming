#include "main.h"
/**
 * _pow_recursion - computes the root of an integer x recursively
 * @x: parameter int
 * @y: parameter root
 * Description: The function stores the multiplication of each recursive call
 * on memory stacks and computes them when base value is fulfilled
 * it follows LIFO stack principle.
 * Return: power value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	/* base cases */
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	/* recursive case terminates when base value is satisfied */
	return (x * _pow_recursion(x, (y - 1)));

	return (0);

}

