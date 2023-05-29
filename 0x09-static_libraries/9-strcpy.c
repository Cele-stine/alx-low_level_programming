#include "main.h"

/**
 * *_strcpy - a function that copies the string to another
 * @dest: string to copy to
 * @src: string to copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int y = 0;
	int x = 0;

	while (*(src + y) != '\0')
	{
		y++;
	}
	for ( ; x < y ; x++)
	{
		dest[x] = src[x];
	}
	dest[y] = '\0';
	return (dest);
}
