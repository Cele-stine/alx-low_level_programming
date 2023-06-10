#include "main.h"

/**
 * _islower - this function check if a char is lowercase or not
 * @c: the char to check
 *
 * Return: 1 if its a lower case letter, and 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
