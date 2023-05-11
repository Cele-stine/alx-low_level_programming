#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character c to stdout
 * @c: the character to be printed
 *
 * Reaturn: On success 1.
 * On error, -1 is retuned , and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
