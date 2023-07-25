#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function that writes a char to stdout
 * @c: the char to print
 *
 * Return: 0 on success and -1 on error and the errno is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
