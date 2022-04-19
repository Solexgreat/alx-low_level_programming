#include "main.h"

/**
 *more_numbers- a function that prints the numbers, from 0 t0 14 ten
 *times on a new line
 * Return:0
 */

void more_numbers(void)
{
	int c;
	int n;

	c = 0;
	n = 0;
	while (n < 10)
	{
		c = 0;
		while (c <= 14)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');

		n++;

	}
	_putchar('\n');
}
