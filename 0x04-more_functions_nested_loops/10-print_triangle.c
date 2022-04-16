#include "main.h"

/**
 * print_triangle- a function that print square
 * size times
 * l represent Lines
 * m repreent marks
 * s represent space
 *@size: Number of size
 * Return:0
 */

void print_triangle(int size)
{
	int l;
	int m;
	int s;

	s = size -1;

	if (size > 0)
	{
		for (l = 0; l < size; l++)
		{
			for (m = 0; m <= l; m++)
			{
				while (s--)
					_putchar(' ');
				_putchar(35);
				s--;
			}
			_putchar('\n');
		}
	}
	else

		_putchar('\n');

}
