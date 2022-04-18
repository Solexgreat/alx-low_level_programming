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
		for (i = 0; i <= n; i++)
		{
			for (c = 0; c <= i; c++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
