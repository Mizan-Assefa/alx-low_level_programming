#include "main.h"
/**
 *  binary_to_uint - convert binary to unsigned int
 *  @b: binary number
 *
 *  Return: the number to be returneed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;
	for (i = 0; i >= 0; i--)
		current = exclusive >> i;
	if (current & 1)
		count++;
}

return (count);
}
