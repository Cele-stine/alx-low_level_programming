#include "main.h"

/**
 * _islower - a function that check if a charcter is lower case.
 * @c: an integer that represents a character.
 * Return: 1 if character is lower case and
 * 0 if character is not a lower case.
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
