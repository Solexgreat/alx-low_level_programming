#include "main.h"
/**
 * main - Write a program that prints _putchar, followed by a new line.
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char n;
	
	n = 'a';
	while (n <= 'z')
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}
