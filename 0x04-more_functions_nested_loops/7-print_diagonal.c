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

	while (i <= n)
	{
		if (n > 0)
		{
			c = 0;
			while (c <= n)
			{
				_putchar(' ');
				c++;
			}
		}
		else
		{
			_putchar('\n');
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
