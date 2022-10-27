#include "main.h"
/**
 * set_bit - set the value of a bit at an index to 1
 * @n: parameter number
 * @index: index to be checked
 * Return: integer bit value
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int temp;

	/* check if index isn't greater than 64 (64-bit)*/
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	/* move the binary 0000 0001 index times */
	temp = 1 << index;

	/* perform OR bitwise to set the index to 1 */
	*n = *n | temp;

	return (1);


}
