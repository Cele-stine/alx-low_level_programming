#include "main.h"

/**
 * print_alphabet - prints the alphabets in lower case
 * The ASCII code for lower case alphabets begine at 97 assigned
 * a to 122 assigned z
 * Return: 0 (success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return i;
}
