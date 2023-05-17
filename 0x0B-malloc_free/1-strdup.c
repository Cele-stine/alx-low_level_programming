#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a new string
 * which is a duplicate of str.
 * @str: the original string
 *
 * Return: pointer to newly allocated space
 */

char *_strdup(char *str)
{
	char *new;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	new = malloc(sizeof(char) * (i + 1));

	if (new == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		new[r] = str[r];

	return (new);
}
