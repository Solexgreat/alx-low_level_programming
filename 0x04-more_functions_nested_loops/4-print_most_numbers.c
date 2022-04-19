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
	for (; c < 58; c++)
	{
		if (c == 50 || c == 52)
		{
			continue;
		}
		_putchar(c);
	}
	_putchar('\n');
}
