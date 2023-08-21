#include "main.h"

/**
 * _isdigit - a function that checks if a character is a digit or not.
 * @c: an integer reptesenting a charcter
 * Return: 1 if the character is a digit and 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
