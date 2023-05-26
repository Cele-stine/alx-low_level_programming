#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that will return the sum of an
 * undifined number of int
 * @n: first parameter
 * Return: 0 (if n == 0)
 * Otherwise - the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int j, sum = 0;

	va_start(ap, n);

	for (j = 0; j < n; j++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
