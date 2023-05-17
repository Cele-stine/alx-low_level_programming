#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concantenates two strings
 * with the malloc function
 * @s1: the fist srting
 * @s2: the second string
 *
 * Return: 0 (success)
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *concat;

	if (s1 == NULL)
	{
		return (" ");
	}
	if (s2 == NULL)
	{
		return (" ");
	}

	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	concat = malloc(sizeof(char) * (i + j + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	i = j = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		concat[i] = s2[j];
		i++;
		j++;
	}

	concat[i] = '\0';
	return (concat);

}
