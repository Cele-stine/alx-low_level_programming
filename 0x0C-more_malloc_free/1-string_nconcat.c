#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a fanction that concantenates two strings
 * using the malloc function
 * @s1: The first string
 * @s2: The second string
 * @n: the parameter to determine the length of s2
 * Return: pointer to a concanteted string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *str;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (str == NULL)
		return (NULL);

	while (i < len1)
	{
		str[i] = s1[i];
	}
	while (n < len2 && i < (len1 + n))
	{
		str[i++] = s2[j++];
	}
	while (n >= len2 && i < (len1 + len2))
	{
		str[i++] = s2[j++];
	}

	str[i] = '\0';
	return (str);
}
