#include "main.h"

/**
 * _strpbrk - searches for the first apperence of a
 * char in a specified set of char
 * @s: string to be searched
 * @accept: string containing the set of char to search fo
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int k;


	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}


return ('\0');
}
