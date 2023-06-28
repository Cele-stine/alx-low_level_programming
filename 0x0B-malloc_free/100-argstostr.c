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

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	strcpy(concat, " ");

	for (i = 1; i < ac; i++)
	{
		strcat(concat, av[i]);
		strcat(concat, "\n");
	}
	return (concat);
}
