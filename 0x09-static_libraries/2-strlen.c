#include "main.h"

/**
 * _strlen - a finction that returns the length if a string
 * @s: pointer to string
 * Return: the lenth of a *s
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
