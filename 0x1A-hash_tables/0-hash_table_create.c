#include "hash_tables.h"

/**
 * hash_table_create - Create hash
 * @size: The size of the array.
 * Return: NULL
 */


hash_table_t *hash_table_create(unsigned long int size)
{
	hash *ht;
	unsigned long int x;

	ht = malloc(sizeof(hash));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		ht->array[x] = NULL;

	return (ht);
}
