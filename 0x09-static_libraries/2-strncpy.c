#include "main.h"

/**
 * _strncpy - copys a string to another
 * @dest: where the string will be copied to
 * @src: the string to be copied
 * @n: maximum num of char to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int r;

	r = 0;
	while (r < n && src[r] != '\0')
	{
		dest[r] = src[r];
		r++;
	}
	while (r < n)
	{
		dest[r] = '\0';
		r++;
	}
	return (dest);
}
