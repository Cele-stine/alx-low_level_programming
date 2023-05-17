#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that takes the size of an array as a parameter
 * @size: determines the size if the array and c
 * @c: the specific char
 *
 * Return: Always 0 (success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *characters = (char *)malloc(size * sizeof(char));
	/* allocating memory for the array */

	if (size == 0)
	{
		return (NULL);
	}
	if (characters == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		characters[i] = c;
	}
	return (characters);
}
