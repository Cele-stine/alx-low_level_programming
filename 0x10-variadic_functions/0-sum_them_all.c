#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of integers
 * @n: constant int fixed variable
 * @...: epilis that indicates presents of an unknown number of arguments
 *
 * Return: sum of all integers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return (0);
	}

	else
	sum = 0;
	for (i = 0; i < n; i++)

		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
