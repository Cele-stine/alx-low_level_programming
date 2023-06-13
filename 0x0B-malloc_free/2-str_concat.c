#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concantenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to the concantenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1;
	int len2;

	if (s1 == NULL)
	{
		return (" ");
	}
	if (s2 == NULL)
	{
		return (" ");
	}
	
	len1 = strlen(s1);
	len2 = strlen(s2);

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
