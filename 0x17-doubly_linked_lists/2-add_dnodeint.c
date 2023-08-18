#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - a function that add a node at the beginning of a doubly
 * linked list
 * @head: the head node
 * @n: the integer data for the list
 * Return: address of the new element.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	else
	{
		new -> n = n;
		new -> next = *head;
		new -> prev = NULL;
	}
	if (*head != NULL)
	{
		(*head) -> prev = new;
	}
	*head = new;
	return (new);
}
