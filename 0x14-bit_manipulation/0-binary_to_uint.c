#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - a function that convers a binary number to  an unsigned int
 * @b: a pointer to the string of binary number
 *
 * Return: the converted number
 * and 0 if there is a char in b that is not 0 or 1 or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int c = 0;
	unsigned int len;

	len = strlen(b);
	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i += k;
		}
		k *= 2;
	}
	return (i);
}
