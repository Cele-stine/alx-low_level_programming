#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memmory using malloc
 * @b: - the integer we are allocating memory for
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
