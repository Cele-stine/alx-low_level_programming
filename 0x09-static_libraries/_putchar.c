#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints char c in stdout
 * @c: the char to print
 *
 * Return: 1 on success
 * -1 on error is returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
