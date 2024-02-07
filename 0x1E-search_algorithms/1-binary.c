#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search -  a function that searches for a value in a sorted array of
 * integers using the Binary search algorithm.
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index of value in the array else If value is not present in
 * array or if array is NULL, return -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t j = size - 1;
	size_t mid;
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}
	while (i <= j)
	{
		printf("Searching in array:");
		for (x = i; x <= j; x++)
		{
			printf(" %d", array[x]);
			if (x < j)
			{
				printf(",");
			}
		}
		printf("\n");
		mid = i + (j - i) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] < value)
		{
			i = mid + 1;
		}
		else
		{
			j = mid - 1;
		}
	}
	return (-1);
}
