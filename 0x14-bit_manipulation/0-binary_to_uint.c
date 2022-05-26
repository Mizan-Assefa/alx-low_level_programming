#include "main.h"
/**
 * binary_to_uint - converter a binaer number to unsigned int 
 * @b: string containing the binary number to change 
 * Return: the converted number 
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int value = 0;

	if(!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if(b[a] < '0' || b[a] > '1')
			return (0);
		value = 2 * value + (b[i] - '0');
	}

	return (value);
}
