#include "hash_tables.h"

/**
 * hash_table_print - Prints hash table.
 * @ht: pointer
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *p;
	unsigned long int x;
	unsigned char comma_flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (comma_flag == 1)
				printf(", ");

			p = ht->array[x];
			while (p != NULL)
			{
				printf("'%s': '%s'", p->key, p->value);
				p = p->next;
				if (p != NULL)
					printf(", ");
			}
			comma_flag = 1;
		}
	}
	printf("}\n");
}
