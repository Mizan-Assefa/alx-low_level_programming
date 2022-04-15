/**
 * print_number - function
 * @n: input value
 * Return: none
 */
void print_number(int n)
{
<<<<<<< HEAD
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
=======
	unsigned int num, num2;
	int i;
	int aux = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	num = n;
	num2 = num;
	if (num > 9)
	{
		while (num >= 10)
		{
			aux = aux * 10;
			num = num / 10;
		}
		_putchar((num2 / aux) + '0');
		aux = aux / 10;

		for (i = aux; i >= 1; i = i / 10)
			_putchar((num2 / i) % 10 + '0');
	}
	else
		_putchar(num + '0');
>>>>>>> 9aada5ec57b66de0d34ffbab0f770a9fc0ce4655
}
