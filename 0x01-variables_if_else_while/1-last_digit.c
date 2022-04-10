#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	if (n > 5)
	{
		printf("is %i and is greater than 5\n", last);
	}
	else if (n < 6 && n != 0)
	{
		printf("is %i and is less than 6 and not 0\n", last);
	}
	else
	{
		printf("is %i and is 0\n", last);
	}
	return (0);
}

