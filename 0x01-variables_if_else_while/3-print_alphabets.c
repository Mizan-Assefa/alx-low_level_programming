#include <stdio.h>
/**
 * main -main block
 * Return: Always 0 sucess
 */
int main(void)

{
	char lower_case;
	char uper_case;

	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	for (uper_case = 'A'; uper_case <= 'Z'; uper_case++)
	{
		putchar(uper_case);
	}
	putchar('\n');

	return (0);
}
