#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x = 0;
	int len, n, q, i;

	i = 1;
	q = 0;

	for (len = 0; b[len] != '\0'; len++)
	{
		if (len < 1)
			i *= 1;
		else
			i *= 2;
	}

	for (n = 0; n < len; n++)
	{
		if (b[n] >= 65 && b[n] <= 122)
			return (0);
		else
		{
			q = (b[n] - '0') * i;
			x += q;
			i /= 2;
		}
	}
	return (x);
}
