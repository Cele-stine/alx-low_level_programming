#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that retuns a new string which is a pointer to string
 * str, memory of the new string can be obtained by malloc and freed by free
 * @str: the string to duplicate
 *
 * Return: pointer to new sring
 */

char *_strdup(char *str)
{
	char *dup;
	int length;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
	{
		return (NULL);
	}

	else
	{
		strcpy(dup, str);
	}
	return (dup);
}

