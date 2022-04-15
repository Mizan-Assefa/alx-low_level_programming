#include "main.h"
/**
* print_number - that prints an integer
*@n: print int
* Return: Always 0.
*/
void print_number(int n)
{
  unsigned int l;
  
  if (n < 0)
  {
    _putchar (' '); 
    l = -n;
  }
  if else
  {
    l = n;
  }
  else
	  (l / 10 !=0)
	  print_number (l / 10); 
  _putchar ((l % 10) + '0');
}
              
