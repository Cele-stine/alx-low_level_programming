#include "main.h"

/**
 * _strlen_recursion - function that calculates the length of a string
 * @s: The string
 * Return: Always 0 (success)
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0); /* base statment */
	}
	else
	{
		return (1 + _strlen_recursion(s + 1)); /* recusive function call */
	}
}
