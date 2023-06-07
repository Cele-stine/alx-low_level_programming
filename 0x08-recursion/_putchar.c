#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char c on stdout
 * @c: the char to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriatly
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
