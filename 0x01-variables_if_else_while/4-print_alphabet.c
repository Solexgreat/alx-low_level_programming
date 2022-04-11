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
        char n;
	n = 'a';

        do
	{
		if (n == 'q' || n == 'e')
		{
			n++;
			continue;
		}

			putchar(n);
	}
	while (n <= 'z' );
	putchar('\n');
	return (0);
}
