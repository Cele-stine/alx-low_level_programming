# include "hash_tables.h"
# include <stdlib.h>

/**
 * hash_table_create - This is a function that creates a Hash table.
 * @size: The size of the array of the hash table
 * Return: A pointer to a newly created hash table
 * Otherwise, NULL.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t)); /* Allocate the table. */
	if (table == NULL)
		return (NULL);

	table -> size = size;
	table -> array = malloc(sizeof(hash_node_t *) * size);
	/* allocate the array of size */
	if (table -> array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		table -> array[i] = NULL;
	}
	return (table);
}
