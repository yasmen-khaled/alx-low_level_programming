#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *po;
	unsigned long int x;

	po = malloc(sizeof(hash_table_t));
	if (po == NULL)
		return (NULL);

	po->size = size;
	po->array = malloc(sizeof(hash_node_t *) * size);
	if (po->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		po->array[x] = NULL;

	return (po);
}
