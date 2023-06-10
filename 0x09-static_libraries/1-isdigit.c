#include "main.h"

/**
 * _isdigit - this function checks for a digit
 * @c: int ti be checked
 *
 * Return: 1 if int is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
		return (0);
}
