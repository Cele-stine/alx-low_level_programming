#include "main.h"

/**
 * _strlen - Determines the length of the string
 * including the null-terminator
 * @s: the string
 * Return: length of the string
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
