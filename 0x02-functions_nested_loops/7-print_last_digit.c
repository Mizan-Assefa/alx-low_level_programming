#include "main.h"
/**
 *  print_last_digit - last digit
 *
 *@n: the int to print
 *  Return: always 0
 */
int print_last_digit(int n)
{
	int d;

	if (n < 10)
	{
		d = (-1 * (n % 10));
		_putchar (d + '0');
		return (d);
	}
	else
	{
		d = (n % 10);
		_putchar (d + '0');
		return (d);
	}
}
