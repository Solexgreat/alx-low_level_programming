#include "main.h"

/**
 * _puts_recursion - main - check the code
 * @s: character of string
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{

	n = 0;
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s+1);
	}

}
