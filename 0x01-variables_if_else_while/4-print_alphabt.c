#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'a';

	while (n <= 'z')
	{
	if (n != 'q' && n != 'e')
	{
		putchar(n);
	};
	n++;
	}
	putchar('\n');
	return (0);
}
