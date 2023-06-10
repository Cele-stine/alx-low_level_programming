#include "main.h"
#include <ctype.h>

/**
 * _isalpha - a function that is used to chec if a char is an alphabet
 * @c: the char to check
 *
 * Return: 1 if the char is an alphabet and 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
