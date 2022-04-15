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
	int i;

	i = n;

	while (i >= 1)
	{
		c = 0;
		while (c <= n)
		{
			_putchar(' ');
			c++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
