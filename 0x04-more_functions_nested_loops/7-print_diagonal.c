#include "main.h"

/**
 *print_diagonal- a function that diagonal line
 *n times
 *@n: Number of times
 * Return:0
 */

void print_diagonal(int n)
{
	int c;

	while (n >= 1)
	{
		c = 0;
		while (c < n)
		{
			_putchar(' ');
			c++;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
	}
	_putchar('\n');
}
