#include "main.h"

/**
 * _strstr - searches for the first occurence of a substring within a srting
 * @haystack: string to be searched
 * @needle: string that rep the substring to search for
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;


		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}


		if (*p == '\0')
			return (haystack);
	}


	return (0);
}
