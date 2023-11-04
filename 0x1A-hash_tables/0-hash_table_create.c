#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: size
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htt;

	htt = malloc(sizeof(hash_table_t));
	if (!htt)
		return (NULL);

	htt->size = size;
	htt->array = calloc(size, sizeof(hash_node_t *));
	if (htt->array == NULL)
	{
		free(htt);
		return (NULL);
	}


	return (htt);
}
