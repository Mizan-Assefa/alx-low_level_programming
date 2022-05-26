#include "main.h"
/**
 *  get_endianness - check
 *  Return: the number to be returneed
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
