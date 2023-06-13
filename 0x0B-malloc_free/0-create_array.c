#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars and
 * initializes it with a specific char
 * @size: the size of the array
 * @c: the char to initialize with
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
