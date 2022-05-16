#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - compute the sum of a variable number of arguments
 * @n: the number of unnamed
 *
 * Return: sum of its parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);

}
