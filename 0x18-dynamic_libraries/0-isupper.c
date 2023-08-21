#include "main.h"

/**
 * _isupper - this function checkes if a character is uppercase
 * @c: an integer that represrnts the charcter
 * Return: 1 if character is upper case and 0 if not.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
