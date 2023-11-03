#include "hash_tables.h"

/**
 * key_index -index
 * @key:key to get the index
 * @size:size of array
 * Return: key.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
