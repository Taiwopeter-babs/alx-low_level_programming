#include "main.h"
/**
 * get_endianness - checks endianess of a machine
 *
 * Return: 1, if little endian, 0 if big endian
 */
int get_endianness(void)
{
	int x;
	char *endian;

	x = 1;

	endian = (char *)&x;

	return ((int)*endian);
}
