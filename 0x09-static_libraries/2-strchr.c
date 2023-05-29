#include "main.h"

/**
 * _strchr - function tha searches for the first
 * occurrence of a specific char
 * @s: the pointer to the string being searched
 * @c: char to be searched
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i = 0;


	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
