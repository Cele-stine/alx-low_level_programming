#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: The string to be printes
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(*s); /* print the character */
	_puts_recursion(s + 1); /* the recusive call to function */
	}
	else
	{
		_putchar('\n');
	}
}
