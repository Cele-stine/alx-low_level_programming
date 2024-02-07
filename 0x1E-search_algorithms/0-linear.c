#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - A function that searches a value in an array of ints using
 * Linear search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: the index of value in the array otherwise if value is not present in
 * array or if array is NULL return -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
