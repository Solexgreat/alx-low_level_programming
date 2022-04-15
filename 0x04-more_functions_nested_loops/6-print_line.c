#include "main.h"

/**
 *print_line- a function that prints line
 *n times
 *@n: Number of times
 * Return:0
 */

void print_line(int n)
{

	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
