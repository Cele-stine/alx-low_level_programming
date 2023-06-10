#include "main.h"

/**
 * _isupper - a function that checks if a chatr is an uppercase
 * @c: int to check
 *
 * Return: 1 if uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
