#include "main.h"

/**
 *print_line- a function that prints line
 *n times
 *@n: Number of times
 * Return:0
 */

void print_line(int n)
{
	int c;

	c = 0;
	while (c <= n)
	{
		_putchar('_');
		c++;
	}
	_putchar('\n');
}
