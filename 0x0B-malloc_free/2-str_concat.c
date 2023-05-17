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
	int i, j;
	char *result;

	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	result = malloc(sizeof(char) * (i + j + 1));

	if (result == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		result[i] = s2[j];
		i++;
		j++;
	}

	result[i] = '\0';
	return (result);

}
