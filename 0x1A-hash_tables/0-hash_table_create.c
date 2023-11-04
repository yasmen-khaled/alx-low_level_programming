#include "hash_tables.h"

/**
 * hash_table_create - Createing hash
 * @size:array.
 * Return:NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htt;
	unsigned long int x;

	htt = malloc(sizeof(hash_table_t));
	htt->size = size;
	htt->array = malloc(sizeof(hash_node_t *) * size);

	for (x = 0; x < size; x++)
		htt->array[x] = NULL;

	return (htt);
}
