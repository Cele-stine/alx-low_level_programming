#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table.
 * @key: A string key.
 * @value: the coresponding value to the key.
 * Return: 1 on success. Otherwise 0.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *value_copy;
	unsigned long int index;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *) key, ht -> size);
	for (i = index; ht -> array; i++)
	{
		if (strcmp(ht -> array[i] -> key, key) == 0)
		{
			free(ht -> array[i] -> value);
			ht -> array[i] -> value = value_copy;
			return (1);
		}
	}
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new -> key = strdup(key);
	if (new -> key == NULL)
	{
		free(new);
		return (0);
	}
	new -> value = value_copy;
	new -> next = ht -> array[index];
	ht -> array[index] = new;

	return (1);
}
