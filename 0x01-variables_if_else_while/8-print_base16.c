#include <stdio.h>
/**
 *  main -main block
 *
 *  Return: Always 0
 */
int main(void)
{
	char hexa;

	for (hexa = 40; hexa <= 57; hexa++)
	{
		putchar(hexa);
	}
	for (hexa = 97; hexa <= 102; hexa++)
	{
		putchar(hexa);
	}

	putchar('\n');

	return (0);

}
