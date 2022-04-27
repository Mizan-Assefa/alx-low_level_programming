#include <unistd.h>
/**
 *  _putchar - write the character c to stdout
 *  @c: the car
 *
 *  Return: always 1 or 0
 *  on error, -1is return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
