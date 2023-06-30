#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a node at the end of a linked list
 * @head: double pointer to the list
 * @str: string to add new node to
 *
 * Return: address of a new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len;
	list_t *new;
	list_t *temp = *head;

	len = 0;
	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
