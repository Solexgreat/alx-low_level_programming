#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 *
 */

int main(void)
{
	unsigned long int n = 612852475143;
	int p;

	for (p = 3; p <= 12057; p += 2)
	{
		for (c = 3; c <= p; c++)
		{
			while (n % p == 0 && n != p)
				n /= p;
		}
		printf(" %lu \n", n);
	}
	return (0);
}
