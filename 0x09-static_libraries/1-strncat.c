#include "main.h"

/**
 * _strncat - concatenate two strings with a
 * specific number of charactes
 * @dest: string to which str will be concatenated
 * @src: string to be appended to dest
 * @n: maximum number of char to concatenate
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}
	dest[i] = '\0';
	return (dest);
}
