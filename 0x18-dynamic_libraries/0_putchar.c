#include "main.h"
#include <unistd.h>

/**
 * _putchar - a function that prints the character c in stdout
 * @c: the characrer to print.
 * Return: 1 on success
 * -1 is returned on error and errno is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
