#include "main.h"

/**
 *  _islower - short description, singlr line
 *  @c: to compare value
 *  Return: 0
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
