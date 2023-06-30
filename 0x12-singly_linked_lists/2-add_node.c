#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list
 * @str: new string to add to node
 *
 * Return: addres of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len;

	len = 0;
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
