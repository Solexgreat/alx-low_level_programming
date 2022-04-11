#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the random
 * number stored in the variable n
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	n = 48;
	m = 48;

	while (m < 58)
	{
		n = 48;

		while (n < 58)
		{
			if (m != n && m < n)
			{
				putchar(m);
				putchar(n);
				if (n == 57 && m == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
		}
			n++;
		}
		m++;
	}
	putchar('\n');
	return (0);
}
