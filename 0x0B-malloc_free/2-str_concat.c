#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _str_concat - a function that concantenates two strings
 * with the malloc function
 * @s1: the fist srting
 * @s2: the second string
 *
 * Return: 0 (success)
 */

char *_str_concat(char *s1, char *s2)
{
	size_t len1;
	size_t len2;
	char *result;

	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
