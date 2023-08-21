#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: the string to get the length of
 * Return: lenth of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s != '/0')
	{
		len++;
		s++;
	}
	return (len);
}
