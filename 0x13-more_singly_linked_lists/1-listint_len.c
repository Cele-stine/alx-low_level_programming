#include "lists.h"

/**
 * listint_len - prints the number of elements in a linked list
 * @h: linked list to tranvase
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num;

	num = 0;
	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
