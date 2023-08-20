#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a node at the end of a doubly
 * linked list.
 * @*head: the head node.
 * @n: the data integer in the list.
 * Return: address of the new list.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *current;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new -> n = n;
		new -> next = NULL;
		new -> prev = NULL;
	}
	if (*head == NULL)
	{
		(*head) = new;
	}
	else
	{
		current = (*head);
		while (current -> next != NULL)
		{
			current = current -> next;
		}
		current -> next = new;
		new -> prev = current;
	}
	return (new);
}
