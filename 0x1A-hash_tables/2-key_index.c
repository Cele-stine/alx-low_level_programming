#include "hash_tables.h"

/**
 * key_index - A function that computes the index of a key.
 * @key: a string key
 * @size: the size of the array
 * Return: the hash value.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
