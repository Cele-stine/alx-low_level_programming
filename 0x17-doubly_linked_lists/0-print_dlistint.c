#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints the elements of dlistint_t
 * (a doubly linked list).
 * @h: a pointer to the head node of dlistint_t
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;
	const dlistint_t *current;

	current = h;
	while (current != NULL)
	{
		printf("%u\n", current -> n);
		count++;
		current = current -> next;
	}
	return (count);
}
