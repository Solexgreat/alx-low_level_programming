#include "main.h"

/**
 *print_diagonal- a function that diagonal line
 *n times
 *@n: Number of times
 * Return:0
 */

void print_diagonal(int n)
{

	while (n >= 1)
	{
		_putchar('\\');
		n--;
	}
	_putchar('\n');
}
