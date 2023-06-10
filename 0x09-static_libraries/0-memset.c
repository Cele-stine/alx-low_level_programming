#include "main.h"

/**
 * _memset - fill a block of memmory with a specific value
 * @s: the starting address memory to be filled
 * @b: the desire value
 * @n: number of bytes to be changed
 *
 * Return: changed array with a new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
