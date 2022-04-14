#include "main.h"
#include <stdio.h>

/**
 *  main - takes a date and print how many days are left in the year, taking
 *  leap years into account
 *  Return: 0
 */
int main(void)
{
	int mounth;
	int day;
	int year;

	mounth = 4;
	day = 01;
	year = 1997;

	printf("Date: %02d/%02d/%04d\n", mounth, day, year);

	day = convert_day(mounth, day);

	print_remaining_days(mounth, day, year);

	return (0);

}
