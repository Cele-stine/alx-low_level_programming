#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that can print anything
 * @format: list of typrs of arguments passed to the function
 * @...: elipsis that indicates the continuation ofarguments
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list any;

	va_start(any, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(any, int));
					break;
					case 'i':
					printf("%s%d", sep, va_arg(any, int));
					break;
					case 'f':
					printf("%s%f", sep, va_arg(any, double));
					break;
					case 's':
					str = va_arg(any, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
					default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(any);
}
