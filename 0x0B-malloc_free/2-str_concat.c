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
	int totallen;

	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	totallen = (len1 + len2 + 1);

	concat = malloc(sizeof(char) * totallen);

	if (concat == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(concat, s1);
		strcat(concat, s2);
	}
	return (concat);
}
