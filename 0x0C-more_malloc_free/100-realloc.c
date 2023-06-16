#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates memory using malloc and free
 * @ptr: pointer to previously allocates int
 * @old_size: size of allocated memory block
 * @new_size: new siz to allocate in memory
 *
 * Return: pointer to new_size allocated in memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	else
		return (malloc(new_size));

	ptr1 = malloc(new_size);

	if (ptr1 == NULL)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}
	free(ptr);
	return (ptr1);
}
