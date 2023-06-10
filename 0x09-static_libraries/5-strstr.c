#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input value
 * @needle: input value
 *
 * Return: 0 on success
 */

char *_strstr(char *haystack, char *needle)
{
	char *i = haystack;
	char *p = needle;

	for (; *haystack != '\0'; haystack++)
	{
		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
