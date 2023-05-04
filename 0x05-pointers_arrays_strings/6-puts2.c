#include "main.h"

/**
 * puts2 - finction that prints all characers of a string
 * beginning with the first one
 * @str: input
 * Return: print
 */

void puts2(char *str)
{
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
