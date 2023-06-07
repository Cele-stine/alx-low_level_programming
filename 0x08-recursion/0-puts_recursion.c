#include "main.h"

/**
 * _puts_recursion - a function that prints a sting using recursion
 * @s: the string to print
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
