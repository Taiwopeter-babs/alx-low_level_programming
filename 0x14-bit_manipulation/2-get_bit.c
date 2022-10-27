#include "main.h"
/**
 * get_bit - get the value of a bit at an index
 * @n: parameter number
 * @index: index to be checked
 * Return: nothing
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bitstatus, setcheck;

	if (index > sizeof(n))
		return (-1);

	/* move the bits index times */
	set_check = (n >> index);

	/* check the value */
	bitstatus = setcheck & 1;

	return (bitstatus);


}
