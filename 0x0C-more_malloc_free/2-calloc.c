#include "main.h"
#include <stdlib.h>

/**
 * _memset - fills the memmory with a constant byte
 * @s: area of mamory to be filled
 * @b: char to copy
 * @n:number of times to copy b
 * Return: a pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - allocates memmory for an array
 * @nmemb: the number of elenents in an array
 * size: size of every element
 * Return: pointer to the allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
