#include "main.h"

/**
 * _strlen - prints the length of a string
 * @s: The string
 * Return: The length of @s
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	return (longi);
}
