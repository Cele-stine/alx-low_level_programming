#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: memory to be stored
 *@src: memory to be copied
 *@n: number of bytes to be copied
 *
 *Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int b = 0;
	int a = n;

	for (; b < a; b++)
	{
		dest[a] = src[b];
		n--;
	}
	return (dest);
}
