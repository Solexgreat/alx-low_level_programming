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

	i = 0;

	if (n > 0)
	{
		while (i <= n)
		{
			c = 0;
			while (c <= i)
			{
				_putchar(' ');
				c++;
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
