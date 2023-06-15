#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenate two strings s1 followed by the
 * first n bytes of s2 and allocates the memmory usung malloc
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: at most bytes to use for s2
 *
 * Return: pointer to concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL || s2 == NULL)
	{
		return (" ");
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < len2)

		concat = malloc(sizeof(char) * (len1 + n + 1));
	else
		concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strncat(concat, s2, n);

	return (concat);
}
