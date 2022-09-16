#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left in the year * taking leap years into consideration
 * Return: 0
 */

int main(void)
{
	int month, day, year;

	month = 9;
	day = 16;
	year = 2022;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
