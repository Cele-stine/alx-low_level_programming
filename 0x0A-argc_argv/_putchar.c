#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the char to print
 *
 * Return: 1 on succes. On error, -1 is returned and errno is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
