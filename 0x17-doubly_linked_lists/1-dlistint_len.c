#include <stdio.h>
#include "lists.h"

/**
 * size_t dlistint_len - a function that returns the number of elements in a
 * linked list
 * @h: the head node
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current;

	current = h;
	while (current != NULL)
	{
		count++;
		current = current -> next;
	}
	return (count);
}
