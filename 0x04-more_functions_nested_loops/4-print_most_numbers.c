#include "main.h"

/**
 *print_most_numbers- a function that prints the numbers, from 0 t0 9
 *Exepect 2 and 4
 * Return:0
 */

void print_most_numbers(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
