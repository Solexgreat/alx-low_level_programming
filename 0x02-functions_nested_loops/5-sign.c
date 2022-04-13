#include "main.h"
/**
 * print_sign- Entry point
 * @n: character to check the case
 * Return: 0 or 1
 */
int print_sign(int n)
{
	int test;

	if (n >= 1)
	{
		test = 1;
		_putchar('+');
	}
	else if (n <= 0)
	{
		test = 0;
		_putchar('-');
	}
	return(test);
}
