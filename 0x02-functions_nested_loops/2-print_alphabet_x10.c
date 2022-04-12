#include "main.h"
/**
 * print_alphabet_x10- Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char n;
	int c;

	c = 0;
	while (c < 10)
	{
		n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		c++;
	}
	_putchar('\n');
}
