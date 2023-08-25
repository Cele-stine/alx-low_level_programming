#include "main.h"

/**
 * _puts- a function that prints a null-terminated to stdout
 * @s: pointer to string
 *
 * Return: nothing
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar ('\n');
}
