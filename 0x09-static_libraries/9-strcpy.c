#include "main.h"

/**
 * _strcpy - a function that copies one string to another
 * @dest: where the string will be copied to
 * @src: the source of the string
 *
 * Return: 0 on success
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest = '\0';
	return (dest);
}
