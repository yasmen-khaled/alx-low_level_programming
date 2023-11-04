#include "hash_tables.h"

/**
 * hash_table_delete - Deleteing hash
 * @ht:pointer
 */


void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *k = ht;
	hash_node_t *n, *p;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			n = ht->array[x];
			while (n != NULL)
			{
				p = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = p;
			}
		}
	}
	free(k->array);
	free(k);
}
