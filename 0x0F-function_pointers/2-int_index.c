#include "function_pointers.h"

/**
 * int_index - a function that checks for an int
 * @array: the array to check
 * @size: the size of the array
 * @cmp: pointer to function
 * Return: 0 on succes
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
