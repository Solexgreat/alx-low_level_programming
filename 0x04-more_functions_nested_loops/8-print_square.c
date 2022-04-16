#include "main.h"

/**
 * print_square- a function that print square
 *size times
 *@size: Number of size
 * Return:0
 */

void print_square(int size)
{
	int u;
	int d;


	if (size > 0)
	{
		for (u = 1; u < size; u++)
		{
			for (d = 1; d < size; d++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
