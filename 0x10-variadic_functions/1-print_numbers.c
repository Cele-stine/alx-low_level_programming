#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers followed by a new line
 * @separator: a string that is separating the numbers
 * @n: the number of ints passed to the function
 * @...: elipsis that indicate continuation of arguments
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list digits;

	va_start(digits, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(digits, int));

		if (index != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(digits);
}
