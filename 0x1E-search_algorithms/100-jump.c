#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * min - a function that returns the smallest number between two integers.
 * @a: fist int to compare.
 * @b: second int to compare.
 * Return: the smallest number.
 */

size_t min(size_t a, size_t b)
{
	if (b > a)
	{
		return (a);
	}
	else
		return (b);
}

/**
 * jump_search - a function that searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 * @array: the pointer to the first element of the array to search in.
 * @size: the number of elements in array.
 * @value: the value to search for.
 * Return: the value or -1 if the array i empty or the value i not in the array
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;

	if (array == NULL)
	{
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (array[min(step, size) - 1] < value)
	{
		prev =  step;
		step += sqrt(size);
		if (prev >= size)
		{
			return (-1);
		}
	}

	while (array[prev] < value)
	{
		prev++;

		if (prev == min(step, size))
		{
			return (-1);
		}
	}
	if (array[prev] == value)
		return (prev);
	return (-1);
}
