#include "main.h"

/**
 * _isalpha - a function that check whether a character is an alphabet or not
 * @c: an integer representing a character.
 * Return: 1 if the character is an alphabet and 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}
