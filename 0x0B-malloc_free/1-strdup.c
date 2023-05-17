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
	char *newstring;

	newstring = _strdup(str);

	if (newstring == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	return (newstring);
}
