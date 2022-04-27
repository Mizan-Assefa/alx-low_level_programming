#include <stdio.h>
#include "main.h"
/**
 *  _puts_recursion - to print string
 *  @s: pointer to memory
 *  Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf('\n');
		return;
	}

	printf(*s);
	_puts_recursion(s + 1);
}
