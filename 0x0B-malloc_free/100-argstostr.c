#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concantenates all arguments of a program
 * @ac: integer input
 * @av: double pointer array
 *
 * Return: pointer to the arguments
 */

char *argstostr(int ac, char **av)
{
	char *concat;
	int i;
	int len;
	int x;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 1; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	concat = malloc(sizeof(char) * (len + 1));

	x = 0;
	for (i = 1; i < ac; i++)
	{
		strcpy(concat + x, av[i]);
		x += strlen(av[i]);
	}
	return (concat);
}
